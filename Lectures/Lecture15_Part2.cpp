#include<algorithm>
#include<math.h>
#include<iostream>
using namespace std;
string Root(int root);
string Exponent(int exponent);
int main()
{
	long RootNum, ExponentNum;
	cout << "Enter the number for the root: ";
	cin >> RootNum;
	while(cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid number\nTry Again: ";
		cin >> RootNum;
	}
	cout << Root(RootNum) << endl << endl;
	cout << "Enter the number for the exponent: ";
	cin >> ExponentNum;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid number\nTry Again: ";
		cin >> ExponentNum;
	}
	cout << Exponent(ExponentNum) << endl;
	return 0;
}
string Root(int root)
{
	string Statement = "The Root code is working";
	for (float i = 2; i <= 10; i++)
	{
		float Answer = pow(root, 1/i);
		cout << i << " root of " << root << " is: " << Answer << endl;
	}
	return Statement;
}
string Exponent(int exponent)
{
	string Statement = "The Exponent code is working";
	for (int i = 1; i <= 10; i++)
	{
		long Answer = pow(exponent, i);
		cout << i << " root of " << exponent << " is: " << Answer << endl;
	}
	return Statement;
}