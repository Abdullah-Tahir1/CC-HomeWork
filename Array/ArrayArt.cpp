#include<iostream>
using namespace std;
int main()
{
	char a[5][5] = { {'-','-','-','-','-'},{'-','O','-','O','-'},{'-','@','@','@','-'},{'-','^','^','^','-'},{'-','v','v','v','-'} };
	for (int i = 0; i < 5; i++) // rows
	{
		for (int j = 0; j < 5; j++) // columns
		{
			cout << a[i][j];
		}
		cout << endl;
	}
	return 0;
}