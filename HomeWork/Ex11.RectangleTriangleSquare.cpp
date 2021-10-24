#include<iostream>
using namespace std;
int main()
{
	float triangle, square, rectangle, l, w; // taking appropriate variables with float datatype
	cout << "Enter the lenght: ";
	cin >> l; // taking lenght from user
	cout << "Enter the width: ";
	cin >> w; // taking width from user
	triangle = l * w * 0.5; // Calculating and putting the value to other variables to make the program easy to understand
	rectangle = l * w;
	square = l * l;
	cout << "The area of the rectangle is : " << rectangle << endl; //Printing out the results
	cout << "The area of the triangle is : " << triangle << endl;
	cout << "The area of the square is : " << square << endl;
	return 0;
}