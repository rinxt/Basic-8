#include "parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
    Quadrilateral::name_ = "��������������";
    if (!(a == c && b == d)) throw ShapeCreationError("������� �� ������� �����");
    if (!(A == C && B == D)) throw ShapeCreationError("���� �� ������� �����");
};
