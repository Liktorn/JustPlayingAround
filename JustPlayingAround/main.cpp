#include <iostream>
#include <limits>
#include <iomanip>	//for fixed and setprecision()
#include <string>
#include "prototypes.h""



using namespace std;

int main()
{
	/* 
	float fValue = 123.45678987654321;
	double dValue = 123.45678987654321;
	long double lValue = 123.45678987654321;
	cout << "Regular float  \t\t" << fixed << fValue << endl;
	cout << "Precise float  \t\t" << setprecision(20) << fixed << fValue << endl;
	cout << "Regular double  \t" << fixed << dValue << endl;
	cout << "Precise double  \t" << setprecision(20) << fixed << dValue << endl;
	cout << "Regular long float\t" << fixed << lValue << endl;
	cout << "Precise long float\t" << setprecision(20) << fixed << lValue << endl;
	*/

	//int array
	int values[2][3][5] = { {{1,2,3,4,5}, {10,20,30,40,50},{100,200,300,400,500} },
						{{ 11,22,33,44,54 },{ 101,202,303,404,505 },{ 1001,2002,3003,4004,5005 } } };

	for (int x = 0; x < 2; x++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << values[x][i][j] << " " << flush;
			}
			cout << endl;
		}
	}
	cout << endl << sizeof(values)/sizeof(int);

	printSomeShit();


	return 0;
}

void printSomeShit()
{
	cout << "this is some shit!" << endl;
}