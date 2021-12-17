#include<algorithm>
#include<array>
#include<math.h>
#include<iostream>
void welcome();
void hello();
void goodbye();
using namespace std;
int main()
{
	cout << "The cube of 8 is " << pow(8, 3) << endl;//pow(number,exponent value)
	cout << "The square-root of 8 is " << sqrt(8) << endl;
	cout << "The square-root of 8 is " << pow(8, 1 / 2) << endl;//pow(number, exponent value)
	cout << "The cube-root of 8 is " << cbrt(8) << endl;
	cout << "The cube-root of 8 is " << pow(8, 1 / 3) << endl;//pow(number, exponent value)
	cout << endl;
	int x;
	cout << "Enter a number: ";
	cin >> x;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid number\nTry again: ";
		cin >> x;
	}
	cout << "The square-root of " << x << " is: " << sqrt(x) << endl;
	cout << "The cube-root of "<< x << " is: " << cbrt(x) << endl;
	welcome();
	hello();
	goodbye();
	return 0;
}
void welcome()
{
	cout << "Welcome" << endl;
}
void hello()
{
	cout << "Hello" << endl;
}
void goodbye()
{
	cout << "GoodBye" << endl;
}