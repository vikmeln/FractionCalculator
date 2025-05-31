#pragma once
#include "Operation.h"
class SubtractOperation : public Operation
{
public:
	virtual Fraction execute(const Fraction&, const Fraction&) const override;
};

