#include<iostream>
using namespace std;
int main()
{
	float fahrenheit = 98.6; //Initializing Fahrenheit as float and giving it the value of 98.6
	cout << fahrenheit << " fahrenheit is " << (fahrenheit - 32) * 5 / 9 << " in Celsius." << endl; // Formula = (F-32)*5/9
	return 0;
}