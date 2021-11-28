#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter two numbers" << endl;
	cin >> a >> b;
	cout << "Pick a calculation" << endl;
	cout << "1: Addition\n2: Subtraction\n3: Multiplication\n4: Division" <<
		endl;
	int input1;
	cin >> input1;
	switch (input1) {
	case 1:
		cout << (a + b);
		break;
	case 2:
		cout << (a - b) << endl;
		break;
	case 3:
		cout << (a * b) << endl;
		break;
	case 4:
		cout << (a / b) << endl;
		break;
	default:
		cout << "Invalid Input" << endl;
	}
	cout << endl;
	cout << "Would you like sugar ?" << endl;
	char input;
	cin >> input;
	switch (input) {
	case 'Y':
	case 'y':
		cout << "Adding sugar..." << endl;
		break;
	case 'N':
	case 'n':
		cout << "No sugar requested..." << endl;
			break;
	default:
		cout << "That input was not recognised" << endl;
	}
	cout << endl;
	string capital;
	cout << "What is the capital of France?\n";
	cin >> capital;
	if (capital == "Paris" || capital == "paris" || capital == "PARIS")
	{
		cout << "You enter the correct answer";
	}
	else
	{
		cout << "Sorry wrong answer";
	}
	return 0;
}