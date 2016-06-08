#ifndef __ABSTRACTIONIMP_H__
#define __ABSTRACTIONIMP_H__

class AbstractionImp
{
public:
	virtual ~AbstractionImp();
	virtual void Operation() = 0;

protected:
	AbstractionImp();
};

class ConcreteAbstractionImpA : public AbstractionImp
{
public:
	ConcreteAbstractionImpA();
	~ConcreteAbstractionImpA();
	virtual void Operation();
};

class ConcreteAbstractionImpB : AbstractionImp
{
public:
	ConcreteAbstractionImpB();
	~ConcreteAbstractionImpB();
	virtual void Operation();
};

#endif	// __abstractionimp_h__
