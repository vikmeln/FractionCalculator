#pragma once
#include"Fraction.h"
class Operation
{
public:
	virtual Fraction execute(const Fraction&, const Fraction&) const = 0;
};

