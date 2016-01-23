#pragma once
#include "figure.h"
class HorizonLine: 	public Figure
{
private:
	//Point begin;
	//int count;
public:
	HorizonLine(Point point, int count, char symbol);
	//Point getBegin(){return begin;};
	//Point getEnd(){return Point(begin.getX()+count, begin.getY());}
	~HorizonLine(void);
};

