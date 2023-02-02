#include "Circle.h"
#include "Rectangle.h"
#include "IShape.h"

int main()
{
	IShape* shape[5]{};

	shape[0] = new Circle();
	shape[1] = new Circle();
	shape[2] = new Rectangle();
	shape[3] = new Rectangle();
	shape[4] = new Circle();

	for (int i = 0; i < 5; i++)
	{
		shape[i]->size();
		shape[i]->draw();
	}

	for (auto p : shape)
	{
		delete p;
	}

	return 0;
}