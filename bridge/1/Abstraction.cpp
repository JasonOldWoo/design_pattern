#include "Abstraction.h"
#include "AbstractionImp.h"

#include <iostream>

Abstraction::Abstraction()
{
}

Abstraction::~Abstraction()
{
}

RefinedAbstraction::RefinedAbstraction(AbstractionImp* imp)
{
	imp_ = imp;
}

RefinedAbstraction::~RefinedAbstraction()
{
}

void RefinedAbstraction::Operation()
{
	imp_->Operation();
}
