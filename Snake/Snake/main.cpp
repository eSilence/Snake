#include "Wall.h"
#include <Windows.h>
#include "Snake.h"
#include <conio.h>
#include "Food.h"

void statistica(Wall*, int,int, Food);
void endGame(Wall* wall); 

int main(){
	
	Point upLeft(0,0);
	Wall wall(upLeft, 50, 40, '#');
	wall.draw();

	Snake snake(Point(5,5,'*'),5, RIGHT);

	Food food(&wall);
	int countFood = 0;

	food.createFood();
	food.draw();
	statistica(&wall, snake.getLength(),  countFood, food);

	while (1){
		if (wall.isCatchSnake(snake) || snake.isHitTail()) {
			endGame(&wall); 
			break;
		}
		if (snake.isFindFood(food.getPoint())){
			countFood++;
			statistica(&wall, snake.getLength(),  countFood, food);
			food.createFood();
			food.draw();
			continue;
		}
		 if(kbhit()){
			 snake.handleKey();
		 }
			snake.draw();
			Sleep(150);
    }

	system("Pause");
}

void statistica(Wall* wall, int lengthSnake, int countFood, Food food){
	Point point = wall->getDownLeftPoint();
	COORD position = {point.getX()+2, point.getY()+2};    //позиция x и y
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleCursorPosition(hConsole, position);
	printf("lengthSnake= %d, countFood = %d, food x = %d, y = %d", 
		lengthSnake, countFood, food.getPoint().getX(), food.getPoint().getY() );
}

void endGame(Wall* wall){
	Point point = wall->getDownLeftPoint();
	COORD position = {point.getX()+2, point.getY()+3};    //позиция x и y
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleCursorPosition(hConsole, position);
	printf("******** End GAME **********\n");
}

