#include "Wall.h"



Wall::Wall(Point point, int countX, int countY, char symbol)
{
	 verticalLine1 = new VerticalLine(point, countY, symbol);
	 verticalLine2 = new  VerticalLine(point.moveRight(countX), countY, symbol);
	 horizonLine1 = new HorizonLine(point.moveLeft(countX), countX, symbol);
	 horizonLine2 = new HorizonLine(point.moveDown(countY), countX, symbol);
}

void Wall::draw(){
	verticalLine1->draw();
	horizonLine1->draw();
	verticalLine2->draw();
	horizonLine2->draw();
}

Wall::~Wall(void)
{
	delete verticalLine1;
	delete horizonLine1;
	delete verticalLine2;
	delete horizonLine2;
}
