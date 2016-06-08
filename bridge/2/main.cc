#include <iostream>

class DrawingAPI
{
public:
	virtual ~DrawingAPI() {;}
	virtual void drawCircle(double x, double y, double radius) = 0;
};

class DrawingAPI1 : public DrawingAPI
{
public:
	void drawCircle(double x, double y, double radius)
	{
		std::cout << "DrawingAPI1 (" << x
			<< ", " << y << ", " << radius << ")"
			<< std::endl;
	}
};

class DrawingAPI2 : public DrawingAPI
{
public:
	void drawCircle(double x, double y, double radius)
	{
		std::cout << "DrawingAPI2 (" << x
			<< ", " << y << ", " << radius << ")"
			<< std::endl;
	}
};

/*Abstraction*/
class Shape
{
public:
	virtual ~Shape() {;}
	virtual void draw() = 0;
	virtual void resizeByPercentage(double pct) = 0;
};

class CircleShape : public Shape
{
public:
	CircleShape(double x, double y, double radius, DrawingAPI* drawingAPI)
		: x_(x), y_(y), r_(radius), drawingAPI_(drawingAPI) {;}

	void draw()
	{
		drawingAPI_->drawCircle(x_, y_, r_);
	}

	void resizeByPercentage(double pct)
	{
		r_ *= pct;
	}

private:
	double x_;
	double y_;
	double r_;
	DrawingAPI* drawingAPI_;
};

int main(void)
{
	DrawingAPI1 dap1;
	DrawingAPI2 dap2;
	CircleShape cir1(1, 2, 3, &dap1);
	CircleShape cir2(5, 7, 11, &dap2);
	cir1.resizeByPercentage(2.5);
	cir2.resizeByPercentage(2.5);
	cir1.draw();
	cir2.draw();

	return 0;
}
