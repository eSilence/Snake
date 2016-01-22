#pragma once

#include "Point.h"
#include "HorizonLine.h"
#include "VerticalLine.h"

class Wall
{
	VerticalLine * verticalLine1, * verticalLine2;
	HorizonLine* horizonLine1, * horizonLine2;

public:
	Wall(Point, int countX, int countY, char symbol);
	void draw();
	Point getUpLeftPoint();
	Point getDownLeftPoint();
	Point getUpRightPoint();
	Point getDownRightPoint();

	~Wall(void);
};

