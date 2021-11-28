#include<iostream>
using namespace std;
int main()
{
	int total1 = 10;
	// these two variables are not the same 
	int Total = 10;

	int myInt;
	myInt = 10;
	double myFirstDouble, mySecondDouble;
	myFirstDouble = 2.5;

	myInt = 10;
	myFirstDouble = 1.235, mySecondDouble = 5.678;

	myInt = 10;
	int mySecondInt(6);
	int myThirdInt{ 9 };

	cout << "Enter Your Age: ";
	int age;
	cin >> age;
	cout << "Your age is: " << age << endl;
	return 0;
}