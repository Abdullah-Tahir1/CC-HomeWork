#include<iostream>
using namespace std;
int main()
{
	int currentTime = 3; // Declaring a variable called currentTime and initialise it with the value 3
	if (currentTime <= 12 && currentTime >= 0) // Applying Condition 
	{
		cout << "Good Morning" << endl; // Good Morning Text
		cout << "It's AM " << endl;
	}
	else if (currentTime < 19)
	{
		cout << "Good Afternoon" << endl; // Good Afternoon Text
		cout << "It's PM " << endl;
	}
	else if (currentTime < 22)
	{
		cout << "Good Evening" << endl; // Good Evening Text
		cout << "It's PM " << endl;
	}
	else if (currentTime < 25)
	{
		cout << "Good Night" << endl; // Good Night Text
		cout << "It's PM " << endl;
	}
	else
	{
		cout << "Time not valid " << endl; // Time not valid Text
	}
	return 0;
}