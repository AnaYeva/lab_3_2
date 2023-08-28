#pragma once
#include <ostream>
#include <istream>

class Complex {
private:
    double real=0;
    double imaginary=0;

public:
    Complex();//empty constructor
    Complex(double real, double imaginary);//basic constructor
    Complex(double real);//only real constructor
    Complex(const Complex& other);//copy constructor

    Complex & operator=(const Complex &other);

    friend std::ostream &operator<<(std::ostream &os, const Complex &complex);
    friend std::istream& operator>> (std::istream& is,Complex& com);

    friend Complex operator+(const Complex& c1, const Complex& c2);
    friend Complex operator+(const Complex& c, double d);
    friend Complex operator+(double d,const Complex& c);

    friend Complex operator*(const Complex& c1, const Complex& c2);
    friend Complex operator*(const Complex& c, double d);
    friend Complex operator*(double d,const Complex& c);

    friend Complex operator-(const Complex& c1, const Complex& c2);
    friend Complex operator-(const Complex& c, double d);
    friend Complex operator-(double d,const Complex& c);
    friend Complex operator-(const Complex& c);

    Complex & operator+=(const Complex& other);
    Complex & operator+=(double d);

    Complex & operator*=(const Complex& other);
    Complex & operator*=(double d);

    Complex & operator-=(const Complex& other);
    Complex & operator-=(double d);

    Complex & operator++();//prefix
    Complex operator++(int);//postfix
    Complex & operator--();//prefix
    Complex operator--(int);//postfix

    ~Complex();
};
