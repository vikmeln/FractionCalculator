#pragma once
#include "Operation.h"
class AddOperation : public Operation
{
public:
	virtual Fraction execute(const Fraction&, const Fraction&) const override;
};

