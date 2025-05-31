#include<iostream>
#include "Operation.h"
#include "AddOperation.h"
#include "SubtractOperation.h"
#include "MultiplyOperation.h"
#include "DivideOperation.h"
#include "FractionCalculator.h"
int main()
{
    Fraction a(1, 2), b(3, 4);
    AddOperation add;
    FractionCalculator calc;
    Fraction result = calc.calculate(add, a, b);
    result.print(); // 5/4
}