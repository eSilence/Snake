#pragma once
#include "figure.h"
class VerticalLine: public Figure
{
public:
	VerticalLine(Point point, int count, char symbol);

	~VerticalLine(void);
};

