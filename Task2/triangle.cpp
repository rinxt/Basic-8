#include "Triangle.h"
#include <iostream>

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
    name_ = "�����������";
    a_ = a;
    b_ = b;
    c_ = c;
    A_ = A;
    B_ = B;
    C_ = C;
}

int Triangle::get_a() {
    return a_;
}

int Triangle::get_b() {
    return b_;
}

int Triangle::get_c() {
    return c_;
}

int Triangle::get_A() {
    return A_;
}

int Triangle::get_B() {
    return B_;
}

int Triangle::get_C() {
    return C_;
}

void Triangle::print_info() {
    Figure::print_info();

    std::cout << "�������: " << "a = " << get_a() << ", b = " << get_b() << ", � = " << get_c()
        << "\n����: " << "� = " << get_A() << ", � = " << get_B() << ", � = " << get_C() << std::endl;
}