#include<iostream>
using namespace std;
int main()
{
	float myNum = 20;
	while (myNum > 0) // using while to print from 20 to 0.5 while keep subtracting 0.5
	{
		cout << myNum << endl;
		myNum -= 0.5;
	}
	return 0;
}