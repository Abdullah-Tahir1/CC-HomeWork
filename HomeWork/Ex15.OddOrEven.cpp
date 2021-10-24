#include<iostream>
using namespace std;
int main()
{
	int n; // declaring a variable 
	cout << "Enter a number: ";
	cin >> n;
	if (n % 2 == 0) // checking if the number is even or not
	{
		cout << "Even" << endl;
	}
	else  if (n % 2 == 1) // checking if the number is odd or not
	{
		cout << "Odd" << endl;
	}
	else // Invalid output
	{
		cout << "Invalid" << endl;
	}
	return 0;
}