#include<iostream>
using namespace std;
int main()
{
	char a[5][5] = { {'-','-','-','-','-'},{'-','O','-','O','-'},{'-','@','@','@','-'},{'-','^','^','^','-'},{'-','v','v','v','-'} }; // declaring and initializing a 2d array
	for (int i = 0; i < 5; i++) // rows
	{
		for (int j = 0; j < 5; j++) // columns
		{
			cout << a[i][j]; // printing out the 2d array
		}
		cout << endl;
	}
	return 0;
}