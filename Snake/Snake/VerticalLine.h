#pragma once
#include "figure.h"
class VerticalLine: public Figure
{
	Point begin;
	int count;
public:
	VerticalLine(Point point, int count, char symbol);
	~VerticalLine(void);
};

