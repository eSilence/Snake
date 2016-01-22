#pragma once
#include "figure.h"
#include "Direction.h"
class Snake: public Figure
{
	Point head;
	//int length;
	Direction direction;
public:
	Snake(Point point, int length, Direction direction);
	Point getNextPositionHead();
	void setDirection(Direction direction);
	void draw();
	~Snake(void);
};

