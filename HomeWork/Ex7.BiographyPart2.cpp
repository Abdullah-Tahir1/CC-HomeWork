#include<iostream>
using namespace std;
int main()
{
	string name; // Intializing name without giving it the value
	int age = 19;
	string hometown; // Intializing hometown without giving it the value
	cout << "Enter your first name: ";
	cin >> name; // Using cin to take the first name as input
	cout << endl << "Enter your hometown: ";
	cin >> hometown;
	cout << "\nName: " << name  << "\nAge:  " << age  << "\nHometown: " << hometown; // using \n to print eeverything in seperate lines
	return 0;
}