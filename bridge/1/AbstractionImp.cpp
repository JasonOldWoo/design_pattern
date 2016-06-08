#include "AbstractionImp.h"
#include <iostream>

AbstractionImp::AbstractionImp()
{
}

AbstractionImp::~AbstractionImp()
{
}

void AbstractionImp::Operation()
{
	std::cout << "AbstractionImp::Operation" << std::endl;
}

ConcreteAbstractionImpA::ConcreteAbstractionImpA()
{
}

ConcreteAbstractionImpA::~ConcreteAbstractionImpA()
{
}

void ConcreteAbstractionImpA::Operation()
{
	std::cout << "ConcreteAbstractionImpA::Operation" << std::endl;
}

ConcreteAbstractionImpB::ConcreteAbstractionImpB()
{
}

ConcreteAbstractionImpB::~ConcreteAbstractionImpB()
{
}

void ConcreteAbstractionImpB::Operation()
{
	std::cout << "ConcreteAbstractionImpB::Operation" << std::endl;
}
