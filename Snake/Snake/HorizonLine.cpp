#include "HorizonLine.h"


HorizonLine::HorizonLine(Point point, int count, char symbol)
{
	for (int i = 0; i < count; i++)
		listPoint.push_back(Point(point.getX()+i, point.getY(), symbol));
}


HorizonLine::~HorizonLine(void)
{
}
