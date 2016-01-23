#pragma once
#include "Point.h"
#include <deque>
using namespace std;

class Figure
{
protected:
	deque <Point> listPoint;
public:
	Figure(void);
	int getLength(){return listPoint.size();}
	Point getBegin(){return listPoint.front();}
	Point getEnd(){return listPoint.back();}
	bool isHit(Figure figure);
	bool isHit(Point point);
	~Figure(void);
	void draw();
};

