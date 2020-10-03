#include <iostream>
#include "Rectangle.hpp"

using namespace std;

int main()
{
    Rectangle r = Rectangle(10,20);

    r.setHeight(13);

    cout << "Area:" << r.getArea() << endl;
    cout << "Perimeter:" << r.getPerimeter() << endl;

    return 0;
}