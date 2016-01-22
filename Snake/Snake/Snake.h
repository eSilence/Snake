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
	//int getLength(){return length;}
	void setDirection(Direction direction);
	void handleKey();
	bool isfindFood(Point Food);
	void draw();
	~Snake(void);
};

