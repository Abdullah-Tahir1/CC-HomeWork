#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i < 8; i++) // Using nested for loop to print the disred output
	{
		for (int j = 7; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}