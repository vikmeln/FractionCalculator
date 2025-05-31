#include "AddOperation.h"

Fraction AddOperation::execute(const Fraction& a, const Fraction& b) const
{
	return (a + b).simplify();
}

