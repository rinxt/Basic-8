#include <iostream>
#include "square.h"
#include "rhombus.h"
#include "equilateralTriangle.h"
#include "rightTriangle.h"
#include "isoscelesTriangle.h"

int main()
{
    system("chcp 1251");

    Triangle tri(10, 20, 30, 50, 60, 70);
    RightTriangle right_triangle(10, 20, 30, 50, 60, 90);
    IsoscelesTriangle isosceles_triangle(10, 20, 10, 50, 60, 50);
    EquilateralTriangle equilateral_triangle(30, 30, 30, 60, 60, 60);
    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
    Square square(20, 20, 20, 20, 90, 90, 90, 90);
    Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
    Rhombus rhomb(30, 30, 30, 30, 30, 40, 30, 40);

    tri.print_info();
    right_triangle.print_info();
    isosceles_triangle.print_info();
    equilateral_triangle.print_info();
    quadrilateral.print_info();
    rectangle.print_info();
    square.print_info();
    parallelogram.print_info();
    rhomb.print_info();

    return 0;
}
