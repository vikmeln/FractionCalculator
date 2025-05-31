#include<iostream>
#include "Fraction.h"

int Fraction::NOD(int a, int b)
{
	while (a != 0 && b != 0)
	{
		if (a > b) a = a % b;
		else b = b % a;
	}
	return a + b;
}

Fraction::Fraction(int n, int d) : numerator{ n }, denominator { d } {}

Fraction::Fraction() :Fraction(0, 1) {}

Fraction Fraction::operator+(const Fraction& f) const
{
	Fraction rez;
	rez.numerator = numerator * f.denominator + f.numerator * denominator;
	rez.denominator = denominator * f.denominator;
	return rez;
}

Fraction Fraction::operator-(const Fraction& f) const
{
	Fraction rez;
	rez.numerator = numerator * f.denominator - f.numerator * denominator;
	rez.denominator = denominator * f.denominator;
	return rez;
}

Fraction Fraction::operator*(const Fraction& f) const
{
	Fraction rez;
	rez.numerator = numerator * f.numerator;
	rez.denominator = denominator * f.denominator;
	return rez;
}

Fraction Fraction::operator/(const Fraction& f) const
{
	Fraction rez;
	rez.numerator = numerator * f.denominator;
	rez.denominator = denominator * f.numerator;
	return rez;
}

Fraction Fraction::simplify()
{
	int n = NOD(this->numerator, this->denominator);
	this->numerator /= n;
	this->denominator /= n;
	return *this;
}

void Fraction::print() const
{
	std::cout << numerator << "/" << denominator << "\n";
}
