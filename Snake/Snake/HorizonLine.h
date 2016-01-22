#pragma once
#include "figure.h"
class HorizonLine: 	public Figure
{
private:
	Point begin;
	int count;
public:
	HorizonLine(Point point, int count, char symbol);
	~HorizonLine(void);
};

