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
	~Figure(void);
	void draw();
};

