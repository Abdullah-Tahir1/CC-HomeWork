#include<iostream>
using namespace std;
int main()
{
	string p = "246", u;
	int c = 5;
	cout << "Enter Your Password: ";
	cin >> u;
	while (p != u && c >= 0) // using while loop with condtion such that it'll keep the loop till user enters the correct password
	{
		if (c > 0)
		{
			cout << "You got " << c << " attempts left" << endl; 
			cout << "Try Again.\nEnter Your Password:";
			cin >> u;
			c--; // counting out the 5 tries
		}
		else
		{
			cout << "Authorities has been alerted!" << endl;
			return 0;
		}
	}
	cout << "You made it!" << endl;
	return 0;
}