#include "Point.h"
#include <windows.h>
#include <stdio.h>

Point::Point(int x, int y){
	this->x = x;
	this->y = y;
	this->symbol = ' ';
}
Point::Point(int x, int y, char symbol){
	this->x = x;
	this->y = y;
	this->symbol = symbol;
}
//Point::Point(Point & point){
//	x = point.x;
//	y = point.y;
//	symbol = point.symbol;
//}
Point Point::moveUp(int count){
	y=y-count;
	return *this;
}
Point Point::moveDown(int count){
	y=y+count;
	return *this;
}
Point Point::moveLeft(int count){
	x=x-count;
	return *this;
}
Point Point::moveRight(int count){
	x=x+count;
	return *this;
}
Point Point::move(Direction direction, int count){
	if (direction == UP) moveUp(count);
	else if (direction == RIGHT) moveRight(count);
	else if (direction == DOWN) moveDown(count);
	else moveLeft(count);
	return *this;
}
bool Point::isHit(Point point){
	return isHit(point.x, point.y);
}
bool Point::isHit(int x, int y){
	return this->x == x && this->y == y;
}
void Point::drawPoint(char symbol){
	COORD position = {x, y};    //позиция x и y
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleCursorPosition(hConsole, position);
	putchar(symbol);
}

void Point::printPoint(){
	drawPoint(this->symbol);
}

void Point::clearPoint(){
	drawPoint(' ');
}
