#include<iostream>
using namespace std;
int main()
{
	int count = 1;
	while (count <= 1000) {
		cout << count << endl;
		count++;
	}
	cout << endl;
	cout << "Enter a whole number: " <<
		endl; int userNum;
	cin >> userNum;
	int count = 1;
	while (true) {
		cout << count << endl;
		if (count == userNum) {
			break;
		}
		count++;
	}
	cout << endl;
	cout << "Enter a whole number: " << endl;
	int userNum;
	cin >> userNum;
	int count = 1;
	while (count <= userNum) {
		cout << count << endl;
		count++;
	}
	cout << endl;
	cout << "Enter your age" << endl; int
		age;
	cin >> age;
	while (cin.fail()) {
		cout << "Invalid input.\nPlease enter a valid age:" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> age;
	}
	cout << "Your age is: " << age;
	cout << endl;
	string password = "1234password";
	string userInput;
	do {
		cout << "Enter your Password" << endl;
		cin >> userInput;
	} while (password != userInput);
	cout << "Welcome to the super secure banking area" << endl;
	cout << endl;
	string password = "1234password";
	string userInput;
	cout << "Enter your Password" << endl;
	cin >> userInput;
	while (password != userInput) {
		cout << "Enter your Password" << endl;
		cin >> userInput;
	}
	cout << "Welcome to the super secure banking area" << endl;
	return 0;
}