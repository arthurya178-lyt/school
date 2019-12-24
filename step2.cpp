#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

const int RACE_END = 70;

void printCurrentPositions(const int * const snapperPtr, const int * const bunnyPtr);
void moveTortoise(int *const);


int main()
{
	int tortoise = 1;
	int hare = 1;

	srand(time(0));

	while (tortoise != RACE_END && hare != RACE_END)
	{
		Sleep(500);
		system("CLS");
		moveTortoise(&tortoise);
		printCurrentPositions(&tortoise, &hare);
	}
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
	srand(time(NULL));
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
