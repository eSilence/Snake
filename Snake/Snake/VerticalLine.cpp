#include "VerticalLine.h"


VerticalLine::VerticalLine(Point point, int count, char symbol)
{
	begin = point;
	listPoint.push_back(begin);

	for (int i = 0; i < count; i++)
		listPoint.push_back(Point(begin.getX(), begin.getY()+i, symbol));
}


VerticalLine::~VerticalLine(void)
{
}
