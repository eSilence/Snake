#include "Wall.h"

Wall::Wall(Point point, int countX, int countY, char symbol)
{
	Figure Line;

	Line = VerticalLine(point, countY, symbol);
	listWall.push_back(Line);
	Line =  VerticalLine(Point(point.getX()+countX,point.getY()), countY, symbol);
	listWall.push_back(Line);
	Line = HorizonLine(point, countX, symbol);
	listWall.push_back(Line);
	Line = HorizonLine(Point(point.getX(),point.getY()+countY), countX, symbol);
	listWall.push_back(Line);
	Line =  VerticalLine(Point(point.getX()+countX/2,point.getY()), countY/2, symbol);
	listWall.push_back(Line);
}

bool Wall::isCatchSnake(Figure snake){
	for(Figure figure : listWall){
		if (snake.isHit(figure))
			return true;
	}
	return false;
}
bool Wall::isHit(Point point){
	for(Figure figure : listWall){
		if (figure.isHit(point))
			return true;
	}
	return false;
}

void Wall::draw(){
	for(Figure figure: listWall)
		figure.draw();
}
Point Wall::getUpLeftPoint(){
	return listWall[0].getBegin();
}

Point Wall::getDownLeftPoint(){
	return listWall[0].getEnd();
}
Point Wall::getUpRightPoint(){
	return listWall[1].getBegin();
}
Point Wall::getDownRightPoint(){
	return listWall[1].getEnd();
}
Wall::~Wall(void)
{
}
