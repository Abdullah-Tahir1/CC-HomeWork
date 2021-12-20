#include<iostream>
using namespace std;
int main()
{
	cout << "1 to 50" << endl;
	for (int i = 1; i < 51; i++) // for loop to print from 1-50
	{
		cout << i << endl;
	}
	cout << "50 to 1" << endl;
	for (int i = 50; i > 0; i--)  // for loop to print from 50-1
	{
		cout << i << endl;
	}
	cout << "30 to 50" << endl;
	for (int i = 30; i < 51; i++) // for loop to print from 30-50
	{
		cout << i << endl;
	}
	cout << "50 to 10" << endl;
	for (int i = 50; i > 9; i-=2) // for loop to print from 50-10 while skipping odd numbers
	{
		cout << i << endl;
	}
	cout << "100 to 200" << endl; // for loop to print all the 5s from 100-200
	for (int i = 100; i < 201; i+=5)
	{
		cout << i << endl;
	}
	return 0;
}