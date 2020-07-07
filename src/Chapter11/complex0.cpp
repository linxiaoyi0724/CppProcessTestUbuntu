#include <iostream>
#include "complex0.h"
using namespace std;

Complex0::Complex0(){}

Complex0::Complex0(double r, double i):real(r),imag(i){}

Complex0::~Complex0(){}

Complex0 Complex0::operator+(const Complex0 c)const
{
    Complex0 result;
    result.real = real + c.real;
    result.imag = imag + c.imag;
    return result;
}

Complex0 Complex0::operator-(const Complex0 c)const
{
    Complex0 result;
    result.real = real - c.real;
    result.imag = imag - c.imag;
    return result;
}

Complex0 operator*(const Complex0 c1, const Complex0 c2)
{
    Complex0 result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag*c2.real;
    return result;
}

Complex0 operator*(double x , const Complex0 c )
{
    Complex0 result;
    result.real = x * c.real;
    result.imag = x * c.imag;
    return result;
}

Complex0 operator~(const Complex0 c)
{
    Complex0 result;
    result.real = c.real;
    result.imag = -c.imag;
    return result;
}


std::istream& operator>>(std::istream& in, Complex0 c)
{
    cout << "real: ";
    in >> c.real;
    cout << "imaginary: ";
    in >> c.imag;
    return in;
}

std::ostream& operator<<(std::ostream& os, Complex0 c)
{
    os << "(" << c.real << ", " << c.imag << ")";
}
