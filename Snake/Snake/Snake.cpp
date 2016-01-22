#include "Snake.h"


Snake::Snake(Point point, int length, Direction direction)
{
	this->head = point;
	//this->length = length;
	this->direction = direction;

	//listPoint.push_back(head);
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
