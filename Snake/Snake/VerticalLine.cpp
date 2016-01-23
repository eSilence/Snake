#include "VerticalLine.h"


VerticalLine::VerticalLine(Point point, int count, char symbol)
{
	for (int i = 0; i < count; i++)
		listPoint.push_back(Point(point.getX(), point.getY()+i, symbol));
}


VerticalLine::~VerticalLine(void)
{
}
