#include <iostream>
#include <iomanip>
using namespace std;

void printCurrentPositions(const int * const snapperPtr, const int * const bunnyPtr);

int main()
{
	int tortoise = 10; //�Q�t 
	int hare = 20; //�ߤl 
	printCurrentPositions(&tortoise, &hare);
}

/*�L�X�Q�t�P�ߤl��m*/
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
