#ifndef COMPLEX0_H_
#define COMPLEX0_H_

#include <iostream>
class Complex0
{
    private:
        double real;
        double imag;

    public:
        Complex0();
        Complex0(double r, double i);
        ~Complex0();

        Complex0 operator+(const Complex0 c)const;
        Complex0 operator-(const Complex0 c)const;
        friend Complex0 operator*(const Complex0 c1, const Complex0 c2);
        friend Complex0 operator*(double x, const Complex0 c);
        friend Complex0 operator~(const Complex0 c);

        friend std::istream& operator>>(std::istream& in, Complex0& c);
        friend std::ostream& operator<<(std::ostream& os, Complex0 c);
};

#endif