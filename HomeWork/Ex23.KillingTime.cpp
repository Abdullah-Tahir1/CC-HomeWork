#include<iostream>
using namespace std;
int main()
{
	int time;
	int money; // Taking time and money as integer
	cout << "Yo bro, how many mins till you get here? " << endl;;
	cin >> time;
	if (time >= 15) // Outer if Statement
	{
		cout << "Ugh, let's do something till he comes, let me check how much money i got." << endl;
		cin >> money;
		if (money > 5) // Inner If
		{
			cout << "Nice! I can buy a coffee and wait for him." << endl;
		}
		else
		{
			cout << "Nevermind, I'll just walk around till he gets here." << endl;
		}
	}
	else // Outer Else
	{
		cout << "Alright, I'll wait for him in the park then." << endl;
	}
	return 0;
}