#include "rhombus.h"

Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, b, c, d, A, B, C, D) {
    Parallelogram::name_ = "Ромб";
};