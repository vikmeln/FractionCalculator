#include "FractionCalculator.h"

Fraction FractionCalculator::calculate(const Operation& op, const Fraction& a, const Fraction& b)
{
    return op.execute(a, b);
}
