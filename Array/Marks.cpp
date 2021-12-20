#include<iostream>
using namespace std;
int main()
{
	int a[5], sum = 0;  // Declaring an array without initializing it
	cout << "Enter the marks." << endl;
	for (int i = 0; i < 5; i++) // running a loop to get input for the array from the user
	{
		cin >> a[i];
		while (cin.fail()) // while loop for invalid inputs
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid number\nTry again: ";
			cin >> a[i];
		}
		sum += a[i]; // adding all the values
	}
	cout << "The average is : " << sum / 5 << endl; // dividing the sum with 5 to get the avg
	return 0;
}