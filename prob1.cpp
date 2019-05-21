#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i, n = 10;
	float average, size, small = 0.0, large = 0.0, sum = 0, arr[9];

	for (i = 0; i < n; ++i)
	{
		cout << "Please Enter Number:";
		cin >> arr[i];
		sum += arr[i];
	}
	for (i = 0; i < 10; ++i)
	{
		if (arr[0] < arr[i])
		{
			large = arr[i];
		}
		else if (arr[0] >= arr[i])
		{
			small = arr[i];
		}
	}

	size = sum;
	average = sum / n;
	cout << "Average = " << average << endl;
	cout << "Smallest Value = " << small << endl;
	cout << "Largest Value = " << large << endl;
	cout << "Total = " << sum << endl;

	_getch();
	return 0;

}