#include<iostream>
using namespace std;
int main()
{
	int input, fact = 1;
	cout << "Enter a number: ";
	cin >> input;
	while (cin.fail() || input < 1)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input.\nTry again: ";
		cin >> input;
	}
	for (int i = input; i > 0; i--)
	{
		fact *= i;
	}
	cout << "Factorial is: " << fact << endl;
	return 0;
}