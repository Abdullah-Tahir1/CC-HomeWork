#include<iostream>
using namespace std;
int main()
{
	char l;
	cout << "Enter the letter: ";
	cin >> l;
	l = tolower(l); // using tolower to make the input lowercase
	if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u') // checking if the input is a vowel or not
	{
		cout << "It's a vovel" << endl;
	}
	else if (isdigit(l)) // checking to see if the input a number by using isdigit
	{
		int n = (int)l;
		cout << "It's a Number " << endl;
		cout << n - 48;
	}
	else if ( (l != 'a' || l != 'e' || l != 'i' || l != 'o' || l != 'u') && isalpha(l)) // checking if the input is a consonant or not
	{
		cout << "It's a Consonant" << endl;
	}
	else  // if its none of the above, its a special digit
	{
		cout << "It's a Special digit" << endl;
	}
	return 0;
}