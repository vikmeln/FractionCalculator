#pragma once
#include "Operation.h"
class DivideOperation : public Operation
{
public:
	virtual Fraction execute(const Fraction&, const Fraction&) const override;
};

