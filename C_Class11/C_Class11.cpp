#include <iostream>
#include <cmath>
#include <string>
#include "ClassEmployee.h"
#include "ClassFigure.h"
using namespace std;

int main() 
{
    Worker* worker = new Worker("Rachel", 25, 2000);
    Manager* manager = new Manager("Ross", 40, 5000);
    Project project("Practica", "2023.03.03", worker, manager);

    project.Print();

    cout << "\n\n";

    Rectangle* rectangle = new Rectangle(12, 10);
    Circle* circle = new Circle(4);
    RightTriangle* right_triangle = new RightTriangle(12, 10);
    Trapeze* trapeze = new Trapeze(12, 10, 6);

    Figure* arr[4] = { rectangle , circle , right_triangle , trapeze };

    for (int i = 0; i < 4; i++)
    {
       cout << arr[i]->Area() << "\n";
    }

    for (int i = 0; i < 4; i++)
    {
        delete arr[i];
    }
}