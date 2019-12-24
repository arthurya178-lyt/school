#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

const int RACE_END = 70;

void printCurrentPositions(const int * const snapperPtr, const int * const bunnyPtr);
void moveTortoise(int *const);
void moveHare(int * const);

int main()
{
	int tortoise = 1;
	int hare = 1;
	int a = time(NULL);
	srand(time(0));

	while (tortoise != RACE_END && hare != RACE_END)
	{
		Sleep(500);
		system("cls");

		moveTortoise(&tortoise);
		moveHare(&hare);
		printCurrentPositions(&tortoise, &hare);

	}
	int b = time(NULL);
	if (tortoise == 70)
		cout << "TORTOISE WINS!!! YAY!!!" << endl;
	else
		cout << "Hare wins. Yuch." << endl;
	cout << "TIME ELAPSED = " << b - a << " seconds";
}

/*印出烏龜與兔子位置*/
void printCurrentPositions(const int * const snapperPtr, const int * const bunnyPtr)
{
	for (int i = 1; i <= 70; i++)
	{
		if (i != 1 && i % 10 == 0)
			cout << '|';
		else
			cout << '-';
	}
	cout << endl;
	for (int t = 1; t <= 70; t++)
	{
		if (t == *bunnyPtr)
			cout << 'H';
		else
			cout << ' ';

	}
	cout << endl;
	for (int h = 1; h <= 70; h++)
	{
		if (h == *snapperPtr)
			cout << 'T';
		else
			cout << ' ';

	}
	cout << endl;
}

/*移動烏龜*/
void moveTortoise(int * const turtlePtr)
{
	int run = 1 + rand() % 10;

	if (run <= 5)
		*turtlePtr += 3;
	else if (run > 5 && run <= 7)
		*turtlePtr -= 6;
	else
		*turtlePtr += 1;

	if (*turtlePtr < 1)
		*turtlePtr = 1;
	else if (*turtlePtr > 70)
		*turtlePtr = 70;
}

/*移動兔子*/
void moveHare(int * const rabbitPtr)
{
	int run = 1 + rand() % 10;

	if (run <= 2)
		*rabbitPtr += 0;
	else if (run > 2 && run <= 4)
		*rabbitPtr -= 9;
	else if (run > 4 && run <= 5)
		*rabbitPtr += 12;
	else if (run > 5 && run <= 8)
		*rabbitPtr += 1;
	else
		*rabbitPtr -= 2;


	if (*rabbitPtr < 1)
		*rabbitPtr = 1;
	else if (*rabbitPtr > 70)
		*rabbitPtr = 70;
}
