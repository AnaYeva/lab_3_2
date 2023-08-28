#include "Complex.h"
using namespace std;
Complex::Complex() {}
Complex::Complex(double real, double imaginary) :real(real), imaginary(imaginary) {}
Complex::Complex(double real) :real(real) {}
Complex::Complex(const Complex& other) :real(other.real), imaginary(other.imaginary) {}

Complex::~Complex() {}

Complex &Complex::operator=(const Complex &other) {
    real=other.real;
    imaginary=other.imaginary;
    return *this;
}

//input and output
std::istream &operator>>(istream &is,Complex &com) {
    is>>com.real>>com.imaginary;
    return is;
}
std::ostream &operator<<(std::ostream &os, const Complex &complex) {
    os << complex.real;
    if (complex.imaginary>0)os <<'+'<< complex.imaginary<<'i';
    else if (complex.imaginary<0)os<< complex.imaginary<<'i';
    return os;
}
//+,+=,++ etc.
Complex &Complex::operator++() {
    real++;
    return *this;
}
Complex Complex::operator++(int) {
    Complex temp=*this;
    ++real;
    return temp;
}
Complex operator+(const Complex &c1, const Complex &c2) {
    Complex temp{c1.real+c2.real,c1.imaginary+c2.imaginary};
    return temp;
}
Complex operator+(const Complex &c, double d) {
    Complex temp{c.real+d,c.imaginary};
    return temp;
}
Complex operator+(double d, const Complex &c) {
    Complex temp{c.real+d,c.imaginary};
    return temp;
}
Complex &Complex::operator+=(const Complex &other) {
    *this = *this +other;
    return *this;
}
Complex &Complex::operator+=(double d) {
    real = real+d;
    return *this;
}
Complex &Complex::operator--() {
    real--;
    return *this;
}
Complex Complex::operator--(int) {
    Complex temp=*this;
    --real;
    return temp;
}
Complex operator-(const Complex &c1, const Complex &c2) {
    Complex temp{c1.real-c2.real,c1.imaginary-c2.imaginary};
    return temp;
}
Complex operator-(const Complex &c, double d) {
    Complex temp{c.real-d,c.imaginary};
    return temp;
}
Complex operator-(double d, const Complex &c) {
    Complex temp{d-c.real,0-c.imaginary};
    return temp;
}
Complex &Complex::operator-=(const Complex &other) {
    *this = *this-other;
    return *this;
}
Complex &Complex::operator-=(double d) {
    real = real-d;
    return *this;
}
Complex operator*(const Complex& c1, const Complex& c2) {
    Complex temp{(c1.real*c2.real)-(c1.imaginary*c2.imaginary),
                 (c1.real*c2.imaginary)+(c1.imaginary*c2.real)};
    return temp;
}
Complex operator*(const Complex &c, double d) {
    Complex temp{c.real*d,c.imaginary*d};
    return temp;
}
Complex operator*(double d, const Complex &c) {
    Complex temp{c.real*d,c.imaginary*d};
    return temp;
}
Complex &Complex::operator*=(const Complex &other) {
    *this=*this*other;
    return *this;
}
Complex &Complex::operator*=(double d) {
    *this=*this*d;
    return *this;
}
Complex operator-(const Complex &c) {
    Complex temp;
    temp=c*(-1);
    return temp;
}





