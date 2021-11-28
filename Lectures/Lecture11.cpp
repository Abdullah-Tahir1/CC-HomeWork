#include <iostream>
#include <string>
using namespace std;
int main()
{
	int y;
	cout << "Enter a number you want the table of: " << endl;
	cin >> y;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid command enter the number again: " << endl;
		cin >> y;
	}
	for (int x = 0; x <= 10; x++)
	{
		cout << y << " x " << x << " = " << y * x << endl;
	}
	for (int i = 5; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i < 6; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 5; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i < 6; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	int n, fact = 1;
	cout << "enter a number to find it factorial: ";
	cin >> n;
	for (int i = n; i >= 1; i--)
	{
		fact = fact * i;
	}
	cout << "\nFactorial = " << fact << endl;
	int c = 1;
	cout << "enter a number to find its table: ";
	cin >> n;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid command enter the number again: " << endl;
		cin >> n;
	}
	while (c < 11)
	{
		cout << n << " x " << c << " = " << c * n << endl;
		c++;
	}
	cout << endl;
	cout << "enter a number to find its table: ";
	cin >> n;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid command enter the number again: " << endl;
		cin >> n;
	}
	cout << "Enter the desired limit: ";
	cin >> c;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid command enter the number again: " << endl;
		cin >> c;
	}
	for (int i = 1; i <= c; i++)
	{
		cout << n << " x " << i << " = " << c * n << endl;
	}
	cout << endl;
	n = 9;
	do
	{
		if (n % 9 == 0)
		{
			cout << n << endl;
		}
		n += 9;
	} while (n < 200);
	return 0;
}