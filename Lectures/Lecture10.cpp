#include<iostream>
using namespace std;
int main()
{
	int count = 0;
	while (count <= 10) 
	{
		cout << count << endl;
		count++;
	}
	cout << endl;
	for (count = 0; count <= 10; count++) 
	{
		cout << count << endl;
	}
	cout << endl;
	for (int x = 0; x < 10; x++) 
	{
		cout << "X is " << x << "\n";
	}
	cout << endl;
	for (int i = 0; i < 5; i++) { //execute the outer loop 5 times
		for (int j = 0; j < 5; j++) {//execute the inner loop 5 x 5 times
			cout << "*"; //print 5 stars
		}
		cout << endl; //print to a new console line
	}
	cout << endl;
	for (int i = 1; i <= 5; i++) {
		for (int j = i; j <= 5; j++) { //execute the inner loop 5 times 
			cout << "*"; //print reducing lines of stars
		}
		cout << endl; //print to a new console line
	}
	return 0;
}