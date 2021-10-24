#include<iostream>
using namespace std;
int main()
{
	int grade;
	cout << "Enter your percentage: "; 
	cin >> grade; // Taking marks as the input from user
	if (grade >= 70 && grade <= 100) // Applying If-Else-If
	{
		cout << "Your grade is A" << endl; // A Grade Output
	}
	else if (grade >= 60 && grade <= 69)
	{
		cout << "Your grade is B" << endl; // B Grade Output
	}
	else if (grade >= 50 && grade <= 59)
	{
		cout << "Your grade is C" << endl; // C Grade Output
	}
	else if (grade >= 40 && grade <= 49)
	{
		cout << "Your grade is D" << endl; // D Grade Output 
	}
	else if (grade < 40 && grade >= 0)
	{
		cout << "Your grade is F" << endl; // F Grade Output
	}
	else
	{
		cout << "Invalid number!" << endl; // Invalid Output
	}
	return 0;
}