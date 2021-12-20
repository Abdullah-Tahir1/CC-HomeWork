#include<iostream>
using namespace std;
int main()
{
	int a[5]; // initializing an array
	for (int i = 0; i < 5; i++) // taking input from the user
	{
		cout << "Enter value number " << i + 1 << " : " << endl;
		cin >> a[i];
		while (cin.fail()) // Wrong input check
		{
			cout << "Incorrect! Enter a number again : ";
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> a[i];
		}
	}
	for (auto b : a) // using auto to print out all the values
	{
		cout << b << endl;
	}
	return 0;
}