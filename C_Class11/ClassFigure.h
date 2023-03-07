#pragma once
class Figure
{
public:

	const virtual double Area() const
	{
		return 0;
	} 
};

class Rectangle : public Figure
{
private:
	double height;
	double width;

public:

	Rectangle(double _height, double _width)
	{
		this->height = _height;
		this->width = _width;
	}

	const virtual double Area() const override
	{
		cout << "Rectangle: ";
		return height * width;
	}
};

class Circle : public Figure
{
private:
	double r;

public:

	Circle(double _r)
	{	
		this->r = _r;
	}

	const virtual double Area() const override
	{
		cout << "Circle: ";
		return 3.14 * pow(r, 2);
	}
};

class RightTriangle : public Figure
{
private:
	double leg1;
	double leg2;

public:

	RightTriangle(double _leg1, double _leg2)
	{
		this->leg1 = _leg1;
		this->leg2 = _leg2;
	}

	const virtual double Area() const override
	{
		cout << "Right Triangle: ";
		return (leg1 * leg2) * 0.5;
	}
};

class Trapeze : public Figure
{
private:
	double side1;
	double side2;
	double height;

public:

	Trapeze(double _side1, double _side2, double _height)
	{
		this->side1 = _side1;
		this->side2 = _side2;
		this->height = _height;
	}

	const virtual double Area() const override
	{
		cout << "Trapeze: ";
		return (side1 + side2) * 0.5 * height;
	}
};