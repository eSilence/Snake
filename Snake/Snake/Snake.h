#pragma once
#include "figure.h"
#include "Direction.h"
#include "Wall.h"

class Snake: public Figure
{
	Point head;
	Direction direction;
public:
	Snake(Point point, int length, Direction direction);
	Point getNextPositionHead();
	void setDirection(Direction direction);
	void handleKey();
	bool isFindFood(Point Food);
	bool isHitTail();
	void draw();
	~Snake(void);
};

