#pragma once
#include "Direction.h"
class Point
{
private:
	int x, y;
	char symbol;
	
	void drawPoint(char symbol);

public:
	Point(){}
	Point(int x, int y);
	Point(int x, int y, char symbol);
	//Point(Point & point);
	int getX() {return x;}
	int getY() {return y;}
	char getSymbol(){return symbol;}
	Point moveUp(int count);
	Point moveDown(int count);
	Point moveLeft(int count);
	Point moveRight(int count);
	Point move(Direction direction, int count);
	void printPoint();
	void clearPoint();
	bool hitPoint(Point point);
	bool hit(int x, int y);

};

