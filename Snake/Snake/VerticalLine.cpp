#include "VerticalLine.h"


VerticalLine::VerticalLine(Point point, int count, char symbol)
{
	//begin = point;
	//this->count = count;
	//listPoint.push_back(begin);

	for (int i = 0; i < count; i++)
		listPoint.push_back(Point(point.getX(), point.getY()+i, symbol));
}


VerticalLine::~VerticalLine(void)
{
}
