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
	~Figure(void);
	void draw();
};

