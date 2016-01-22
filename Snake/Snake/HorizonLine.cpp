#include "HorizonLine.h"


HorizonLine::HorizonLine(Point point, int count, char symbol)
{
	begin = point;
	this->count = count;
	//listPoint.push_back(begin);

	for (int i = 0; i < count; i++)
		listPoint.push_back(Point(begin.getX()+i, begin.getY(), symbol));
}


HorizonLine::~HorizonLine(void)
{
}
