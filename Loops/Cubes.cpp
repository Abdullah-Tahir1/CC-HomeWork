#include<iostream>
using namespace std;
int main()
{
	int n,c=1;
	cout << "Enter a number: ";
	cin >> n;
	while (!cin.fail() && c <= n) // checking if the user entered the entered input
	{
		cout << "Number is " << c << " and the cube is " << c * c * c << endl;
		c++;
	}
	return 0;
}