#pragma once
#include "Operation.h"
class MultiplyOperation : public Operation
{
public:
	virtual Fraction execute(const Fraction&, const Fraction&) const override;
};

