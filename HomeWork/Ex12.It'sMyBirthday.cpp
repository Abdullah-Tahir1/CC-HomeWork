#include<iostream>
using namespace std;
int main()
{
	bool myBirthday = true; // declaring a varible named myBirthday with the data type as bool
	int age = 18; // declaring a varible named age with the data type as int

	if (myBirthday == true) // if statement will be executed if the value of myBirthday is true
	{
		age++; // age + 1
		cout << "It is my birthday. I am " << age << " years old";
	}
	else // else statement will be executed if the value of myBirthday is false
	{
		cout << "It is not my birthday" << endl;
	}
	return 0;
}