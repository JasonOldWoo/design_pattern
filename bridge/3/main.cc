#include <iostream>
#include <string>

/*Implementor*/
class ColorImpl
{
public:
	~ColorImpl() {;}
	virtual std::string& bepaint() = 0;

protected:
	ColorImpl() {value_ = "NULL";};

protected:
	std::string value_;
};

/*Abstraction*/
class BrushPenAbstraction
{
public:
	virtual ~BrushPenAbstraction() {;}
	virtual void setImplementorColor(ColorImpl* colorImpl)
	{
		color_ = colorImpl;
	}
	virtual void operationDraw() = 0;

protected:
	BrushPenAbstraction() {color_ = NULL;}

protected:
	ColorImpl* color_;
};

/*RefinedAbstraction*/
class BigBrushPenRefinedAbstraction : public BrushPenAbstraction
{
public:
	void operationDraw()
	{
		std::cout << "big and " << color_->bepaint()
			<< " drawing" << std::endl;
	}
};

class MiddleBrushPenRefinedAbstraction : public BrushPenAbstraction
{
public:
	void operationDraw()
	{
		std::cout << "middle and " << color_->bepaint()
			<< " drawing" << std::endl;
	}
};

class SmallBrushPenRefinedAbstraction : public BrushPenAbstraction
{
public:
	void operationDraw()
	{
		std::cout << "small and " << color_->bepaint()
			<< " drawing" << std::endl;
	}
};

/*OncreteImplementor*/
class OnCreteRedImpl : public ColorImpl
{
public:
	OnCreteRedImpl() {value_ = "Red";}
	std::string& bepaint()
	{
		return value_;
	}
};

class OnCreteBlueImpl : public ColorImpl
{
public:
	OnCreteBlueImpl() {value_ = "Blue";}
	std::string& bepaint()
	{
		return value_;
	}
};

int main(void)
{
	BigBrushPenRefinedAbstraction big;
	MiddleBrushPenRefinedAbstraction middle;
	SmallBrushPenRefinedAbstraction small;
	ColorImpl* red = new OnCreteRedImpl();
	ColorImpl* blue = new OnCreteBlueImpl();
	big.setImplementorColor(red);
	middle.setImplementorColor(red);
	small.setImplementorColor(blue);
	big.operationDraw();
	middle.operationDraw();
	small.operationDraw();

	return 0;
}
