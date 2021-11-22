#include <iostream> 
using namespace std;
int main()
{
	string n;
	while (true) // using while loop 
	{
		cout << "Enter either 1 or 2: ";
		cin >> n;
		if (n == "1") // using if to print statements according to user's input
		{
			cout << "You have entered the number 1" << endl;
			return 0; // using return 0 to end the program
		}
		else if (n == "2")
		{
			cout << "You have entered the number 2" << endl;
			return 0;
		}
	}
	cout << "You didn't enter 1 nor 2" << endl; // Error text
	return 0;
}