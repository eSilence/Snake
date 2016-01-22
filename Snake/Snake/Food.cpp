#include "Food.h"


Food::Food(Wall* wall){
	this->wall = wall;
}

Point Food::createFood(){
	Point upLeft = wall->getUpLeftPoint();
	Point downRight = wall->getDownRightPoint();
	int x = rand() % (downRight.getX() - upLeft.getX()) + upLeft.getX();
	int y = rand() % (downRight.getY() - upLeft.getY()) + upLeft.getY();
	food = Point(x,y, 'f');
	food.printPoint();
	return food;
}

Food::~Food(void)
{
}
