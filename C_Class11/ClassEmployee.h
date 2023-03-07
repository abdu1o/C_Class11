#pragma once
#include <string>
#include <iostream>

using namespace std;

class Employee
{
protected:
    string name; 
    int age;
    double salary;

public:
    Employee() {};
    Employee(string _name, int _age, double _salary)
    {
        this->name = _name;
        this->age = _age;
        this->salary = _salary;
    }

    const virtual void Print() const {}

    const string GetName() const
    {
        return name;
    }
};

class Worker : public Employee
{
public:
    Worker() {};
    Worker(string name, int age, double salary) 
        : Employee(name, age, salary) {}

    const virtual void Print() const override
    {
        cout << name << " work..." << endl;
    }

    const string GetName() const
    {
        return name;
    }
};

class Manager : public Employee
{
public:
    Manager() {};

    Manager(string name, int age, double salary) 
        : Employee(name, age, salary) {}

    const virtual void Print() const override
    {
        cout << name << " manage..." << endl;
    }

    const string GetName() const
    {
        return name;
    }
};

class Project : public Worker, public Manager, public Employee 
{
private:
    string name;
    string deadline;
    Worker* worker;
    Manager* manager;

public:

    Project(string _name, string _deadline, Worker* _worker, Manager* _manager)
    {
        this->name = _name;
        this->deadline = _deadline;
        this->worker = _worker;
        this->manager = _manager;
    }

    const virtual void Print() const override
    {
        cout << "Project: " << name << endl;
        cout << "Deadline: " << deadline << endl;
        cout << "Worker: " << worker->Employee::GetName() << endl;
        cout << "Manager: " << manager->Employee::GetName() << endl;
    }
};