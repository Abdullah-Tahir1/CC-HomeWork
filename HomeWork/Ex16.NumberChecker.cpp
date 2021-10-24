#include<iostream>
using namespace std;
int main()
{
	int n; // Declaring a variable
	cout << "Enter a number: ";
	cin >> n; // Taking input from user
	if (n>0) // For +ve
	{
		cout << "The number is positive." << endl; 
	}
	else if (n<0) //  For -ve
	{
		cout << "The number is negative." << endl;
	}
	else if (n==0) // For 0
	{
		cout << "The number is zero." << endl;
	}
	else // For Invalid input
	{
		cout << "Invalid Number." << endl;
	}
	return 0;
}