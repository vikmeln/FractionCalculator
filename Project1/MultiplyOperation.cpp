#include "MultiplyOperation.h"

Fraction MultiplyOperation::execute(const Fraction& a, const Fraction& b) const
{
	return (a * b).simplify();
}

