#include "isoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    Triangle::name_ = "�������������� �����������";
    if (!(a == c)) throw ShapeCreationError("������� ������� �� �����");
    if (!(A == C)) throw ShapeCreationError("���� ��� ������� �������� �� �����");
}