#include<iostream>
using namespace std;
int main()
{
	string answer;
	cout << "What is the capital of France?" << endl;
	cin >> answer;
	for (int i = 0; i < answer.length(); i++) // using for loop
	{
		answer[i] = tolower(answer[i]); // using tolower function to lowercase the input
	}
	if (answer == "paris") // using If-Else
	{
		cout << "You are correct!" << endl;
	}
	else // Else block
	{
		cout << "You are incorrect!" << endl;
	}
	return 0;
}
