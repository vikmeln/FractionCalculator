#pragma once
class Fraction
{
	int numerator;
	int denominator;
	int NOD(int, int);
public:
	Fraction(int, int);
	Fraction();
	Fraction operator+(const Fraction&) const;
	Fraction operator-(const Fraction&) const;
	Fraction operator*(const Fraction&) const;
	Fraction operator/(const Fraction&) const;
	Fraction simplify();
	void print() const;
};

