#include<iostream>
#include<string>
using namespace std;
int main()
{
	bool musician; // Taking musician as bool
	int answer; 
	int instrument; // Taking 2 variables with int datatype
	cout << "Hey! Do you play any musician instrument?\n1: Yes\n2: No\n";
	cin >> answer;
	if (answer == 1) // initialinsing musician variable according to user's input
	{
		musician = true;
	}
	else
	{
		musician = false;
	}
	if (musician == true) // True Block
	{
		cout << "Alright! What kind of insturment you play though? \n1: Guitar\n2: Drums\n3: Something Else" << endl;
		cin >> instrument;
		if (instrument == 1) // 1st condition 
		{
			cout << "Nice, I really needed a guitarist." << endl;
		}
		else if (instrument == 2) // 2nd condition
		{
			cout << "Nice, I really needed a drummer." << endl;
		}
		else // False block
		{
			cout << "Ahh that sucks, I only need a guitarist or a drummer." << endl;
		}
	}
	else // Outer false block
	{
		cout << "Aww man, I really wanted to start a band." << endl;
	}
	return 0;
}