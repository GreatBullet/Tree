#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	system("color 0A");
	int n = 20;
	int space = 0;
	int star = 0;
	int trunkSpace1 = 0;
	int trunkSpace2 = 0;

	for (int i = 1; i <= n; i++)
	{
		space = n - i;
		star = 2 * i - 1;
		while (space > 0)
		{
			cout << " ";
			space--;
		}
		while (star > 0)
		{
			cout << "*";
			star--;
		}
		cout << endl;
	}

	//Stamm
	trunkSpace1 = n - 1;
	trunkSpace2 = n - 1;
	while (trunkSpace1 > 0)
	{
		cout << " ";
		trunkSpace1--;
	}
	cout << "*" << endl;
	while (trunkSpace2 > 0)
	{
		cout << " ";
		trunkSpace2--;
	}
	cout << "*" << endl;
	cin.get();
	return 0;
}
