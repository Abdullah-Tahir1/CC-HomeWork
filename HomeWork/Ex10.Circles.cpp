#include<iostream>
using namespace std;
int main()
{
	int area; //Initializing area with integer
	int circumference; //Initializing circumference with integer
	int radius; //Initializing radius with integer
	cout << "Enter the radius of the circle: " ;
	cin >> radius; // taking radius from user
	cout << "The Area of the circle is: " << (22 / 7) * radius * radius << endl; // Area = (22/7)r^2
	cout << "The Circumference of the circle is: " << 2 * (22 / 7) * radius << endl; // Circumference = 2(22/7)r
	return 0;
}
