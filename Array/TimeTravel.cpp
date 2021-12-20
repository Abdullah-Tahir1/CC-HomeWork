#include<iostream>
using namespace std;
int main()
{
	string a[12] = { "jan","feb","mar","apr","may", "jun", "jul", "aug", "sept", "oct", "nov", "dec", }; // Declaring array with string data type
	for (int i = 0; i < 12; i++) // running a for loop to print out all the values in the array
	{
		cout << a[i] << endl;
	}
	return 0;
}