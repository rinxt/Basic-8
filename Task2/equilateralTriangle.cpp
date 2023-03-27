#include "equilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    Triangle::name_ = "�������������� �����������";
    if (!(a==b && b==c)) throw ShapeCreationError("������� �� �����");
    if (!(A == 60 && B == 60 && C == 60)) throw ShapeCreationError("���� �� ����� 60");
};
