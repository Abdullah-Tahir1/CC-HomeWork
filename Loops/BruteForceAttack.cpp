#include<iostream>
using namespace std;
int main()
{
	string u, p = "246";
	cout << "Enter Your Password: ";
	cin >> u;
	while (u != p && !cin.fail()) // using while loop to repeat the loop tll user enters the correct passsword
	{
		cout << "Try Again.\nEnter Your Password:";
		cin >> u;
	}
	cout << "You made it!" << endl;
	return 0;
}