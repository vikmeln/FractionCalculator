#include "SubtractOperation.h"

Fraction SubtractOperation::execute(const Fraction& a, const Fraction& b) const
{
	return (a - b).simplify();
}

