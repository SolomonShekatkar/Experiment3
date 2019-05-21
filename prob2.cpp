#include <iostream>
#include <conio.h>

using namespace std;

const int week = 7;
const int province = 3;
char x;

int main()
{
	int temp[province][week];
	cout << "Enter all temperature for Province A, Province B and Province C for a week" << endl;

	for (int i = 0; i < province; ++i)
	{
		for (int k = 0; k < week; ++k)
		{
			if (i == 0)
				x = 'A';
			else if (i == 1)
				x = 'B';
			else
				x = 'C';
			cout << "Province " << x << ", Day " << k + 1 << " : ";
			cin >> temp[i][k];
		}
	}
	cout << endl;
	cout << "Displaying Values:" << endl;
	for (int i = 0; i < province; i++)
	{
		for (int k = 0; k < week; ++k)
		{
			if (i == 0)
				x = 'A';
			else if (i == 1)
				x = 'B';
			else
				x = 'C';
			cout << "Province " << x << ", Day " << k + 1 << " = " << temp[i][k] << endl;
		}
	}
_getch();
return 0;
}