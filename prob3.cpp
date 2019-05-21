#include <iostream>
#include<conio.h>
#include <cstring>

using namespace std;
int main()
{
	char A[1000];
	int i;

	cout << "Enter characters: ";
	cin.getline(A, 1000);
	i = strlen(A);
	for (int x = i; x >= 0; x--)
	{
		cout << A[x];
	}
	cout << "Array size:" << i + 1;

	_getch();
	return 0;
}
