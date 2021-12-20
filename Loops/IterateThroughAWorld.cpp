#include<iostream>
using namespace std;
int main()
{
	string myWord = "Hello World"; // Intializing an array
	for (int i = 0; i < myWord.length(); i++) // Using for loop to print the string letter by letter
	{
		cout << myWord.at(i) << endl;
	}
	return 0;
}