#include<algorithm>
#include<math.h> // including math.h 
#include<iostream>
using namespace std;
string Root(int root); // declaring a funtion "Root"
string Exponent(int exponent); // declaring a funtion "Exponent"
int main()
{
	long RootNum, ExponentNum; // declaring 2 variables with long data type
	cout << "Enter the number for the root: ";
	cin >> RootNum; // Taking input from the user
	while(cin.fail()) // Checking for wrong input
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid number\nTry Again: ";
		cin >> RootNum;
	}
	cout << Root(RootNum) << endl << endl; // Calling the "Root" function and printing out its returned value
	cout << "Enter the number for the exponent: "; // Taking input from the user
	cin >> ExponentNum;
	while (cin.fail())// Checking for wrong input
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid number\nTry Again: ";
		cin >> ExponentNum;
	}
	cout << Exponent(ExponentNum) << endl;  // Calling the "Exponent" function and printing out its returned value
	return 0;
}
string Root(int root) // "Root" function
{
	string Statement = "The Root code is working";
	for (float i = 2; i <= 10; i++)
	{
		float Answer = pow(root, 1/i); // using pow funtion and multiplying the input value with point values
		cout << i << " root of " << root << " is: " << Answer << endl;
	}
	return Statement; // Returning the string to the main function
}
string Exponent(int exponent) // "Exponent" function
{
	string Statement = "The Exponent code is working";
	for (int i = 1; i <= 10; i++)
	{
		long Answer = pow(exponent, i); // using pow funtion and multiplying the input value with point values
		cout << i << " root of " << exponent << " is: " << Answer << endl;
	}
	return Statement; // Returning the string to the main function
}