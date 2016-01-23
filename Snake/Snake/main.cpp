#include "Wall.h"
#include <Windows.h>
#include "Snake.h"
#include <conio.h>
#include "Food.h"

void statistica(Wall*, int,int);
void endGame(Wall* wall); 
int main(){
	
	Point upLeft(0,0);
	Wall wall(upLeft, 50, 40, '#');
	wall.draw();

	Snake snake(Point(5,5,'*'),5, RIGHT);

	Food food(&wall);
	int countFood = 0;

	food.createFood();
	statistica(&wall, snake.getLength(),  countFood);

	while (1){
		if (wall.isFindSnake(snake) || snake.isHitTail()) {
			endGame(&wall); 
			break;
		}
		if (snake.isFindFood(food.getPoint())){
			countFood++;
			statistica(&wall, snake.getLength(),  countFood);
			food.createFood();
			continue;
		}
		 if(kbhit()){
			 snake.handleKey();
		 }
			snake.draw();
			Sleep(100);
    }

	system("Pause");
}
void statistica(Wall* wall, int lengthSnake, int countFood){
	Point point = wall->getDownLeftPoint();
	COORD position = {point.getX()+2, point.getY()+2};    //позиция x и y
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleCursorPosition(hConsole, position);
	printf("lengthSnake= %d, countFood = %d", lengthSnake, countFood);
}

void endGame(Wall* wall){
	Point point = wall->getDownLeftPoint();
	COORD position = {point.getX()+2, point.getY()+3};    //позиция x и y
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleCursorPosition(hConsole, position);
	printf("******** End GAME **********\n");
}

