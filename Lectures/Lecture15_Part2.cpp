#include<iostream>
using namespace std;
int myCalculation(int num) 
{
	num *= 2;
	num += 8;
	return num;
}
void myCalculation1(int num)
	{
		num *=2;
		num += 8;
		cout << num << endl;
	}
double sumItems(double item1, double item2)  //define function
{
	double total = item1 + item2; //calculate cost of items
	return total; //return total cost back to main program
}
string greetings(int time)
{
	//evaluate int value passed in and set return message
	if (time < 12) 
	{
		return "Good Morning";
	}
	else if (time > 11 && time < 18)
	{
		return "Good Afternoon";
	}
	else if (time > 17 && time < 22)
	{
		return "Good Evening";
	}
	else if (time > 21 && time < 25)
	{
		return "Good Night";
	}
}
int main() 
{
	cout << "What time is it?" << endl; //ask the user for time
	int userInput; //variable to store user response
	cin >> userInput; //get user input
	while (cin.fail() || userInput < 0 || userInput > 24)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid Time\nTry again: ";
		cin >> userInput;
	}
	//output string returned by function
	cout << greetings(userInput) << endl;
	double myMoney = 48.00;
	double shoes;
	double tshirt;
	cout << "How much does the shoe costs? ";
	cin >> shoes;
	while (cin.fail() && shoes >= 0)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid Amount\nTry again: ";
		cin >> shoes;
	}
	cout << "How much does the tshirt costs? ";
	cin >> tshirt;
	while (cin.fail() && tshirt >= 0)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid Amount\nTry again: ";
		cin >> tshirt;
	}
	if (sumItems(shoes, tshirt) <= myMoney) //determine whether you can afford items
	{ 
		cout << "you can afford these items" << endl;
	}
	else
	{
		cout << "keep saving up" << endl;
	}
	int userNum1; // create integer variable
	cout << "Enter A Number: "; // ask user to enter a number
	cin >> userNum1; //assign users input to our num variable
	myCalculation1(userNum1); //call the function and pass in num as parameter argument

	int userNum; // create integer variable
	cout << "Enter A Number: "; // ask user to enter a number
	cin >> userNum; //assign users input to our num variable
	userNum = myCalculation(userNum); //make userNum equal to value returned by function
	cout << userNum << endl; //output userNum
	return 0;
}