#include "Food.h"


Food::Food(Wall* wall){
	this->wall = wall;
}

Point Food::createFood(){
	do {
		Point upLeft = wall->getUpLeftPoint();
		Point downRight = wall->getDownRightPoint();
		int x = rand() % (downRight.getX() - upLeft.getX()) + upLeft.getX();
		int y = rand() % (downRight.getY() - upLeft.getY()) + upLeft.getY();
		food = Point(x,y, 'f');
	}
	while (isCorrectFood());
	return food;
}

void Food::draw(){
	food.printPoint();
}
bool Food::isCorrectFood(){
	return wall->isHit(this->food);
}
Food::~Food(void)
{
}
