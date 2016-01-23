#include "Snake.h"
#include <conio.h>

Snake::Snake(Point point, int length, Direction direction)
{
	this->head = point;
	//this->length = length;
	this->direction = direction;

	for(int i = 0; i < length; i++)
		listPoint.push_back(Point(point.getX()-i, point.getY(), point.getSymbol()));
	Figure::draw();
}

Point Snake::getNextPositionHead(){
	Point newHead = head;
	newHead.move(direction, 1);
	return newHead;
}

void Snake::setDirection(Direction direction){
	this->direction = direction;
}

void Snake::handleKey(){
	unsigned char ch;
	ch = getch();
		if (ch == 224) {
			ch = getch();
			switch(ch)  {
				case 75: if (direction!= RIGHT) direction =  LEFT; break;
				case 77: if (direction!= LEFT) direction =  RIGHT; break;
				case 72: if (direction!= DOWN) direction =  UP;	break;
				case 80: if (direction!= UP) direction =  DOWN; break;
			}
			setDirection(direction);
		}
}
bool Snake::isFindFood(Point food){
	if (getNextPositionHead().isHit(food)){
		head = Point(food.getX(), food.getY(), head.getSymbol());
		head.printPoint();
		listPoint.push_front(head);
		return true;
	}
	return false;
}
bool Snake::isHitTail(){
	for(int i = 1; i < listPoint.size(); i++)
		if (head.isHit(listPoint[i]))
			return true;
	return false;
}

void Snake::draw(){
	listPoint.back().clearPoint();
	listPoint.pop_back();
	head = getNextPositionHead();
	listPoint.push_front(head);
	head.printPoint();
	
}

Snake::~Snake(void)
{
}
