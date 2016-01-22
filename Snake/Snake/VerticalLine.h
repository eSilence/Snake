#pragma once
#include "figure.h"
class VerticalLine: public Figure
{
	Point begin;
	int count;
public:
	VerticalLine(Point point, int count, char symbol);
	Point getBegin(){return begin;}
	Point getEnd(){return Point(begin.getX(), begin.getY()+ count);}

	~VerticalLine(void);
};

