#pragma once

#include "Point.h"
#include "HorizonLine.h"
#include "VerticalLine.h"
#include <vector>
class Wall
{
	vector <Figure> listWall; 

public:
	Wall(Point, int countX, int countY, char symbol);
	void draw();
	Point getUpLeftPoint();
	Point getDownLeftPoint();
	Point getUpRightPoint();
	Point getDownRightPoint();
	bool isFindSnake(Figure snake);
	~Wall(void);
};

