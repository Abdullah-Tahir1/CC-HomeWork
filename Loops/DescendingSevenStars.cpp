#include<iostream>
using namespace std;
int main()
{
	for (int i = 7; i > 0; i--) // Using nested for loop to print the desired output
	{
		for (int j = i; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}