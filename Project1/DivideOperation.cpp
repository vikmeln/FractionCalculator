#include "DivideOperation.h"

Fraction DivideOperation::execute(const Fraction& a, const Fraction& b) const
{
	return (a / b).simplify();
}

