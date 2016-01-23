#include "Figure.h"

Figure::Figure(void)
{}

Figure::~Figure(void)
{}

void Figure::draw(){
	for(Point point: listPoint) {
		point.printPoint();
	}
}
bool Figure::isHit(Figure figure){
	for(Point point: listPoint)
		if (figure.isHit(point))
			return true;
	return false;

}
bool Figure::isHit(Point point){
	for(Point p: listPoint)
		if (p.isHit(point))
			return true;
	return false; 
}