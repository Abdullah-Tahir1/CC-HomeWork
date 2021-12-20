#include <iostream> 
using namespace std;
int main() {
	int myInt;
	int counter = 0;
	cout << "Enter a number : ";
	cin >> myInt;
	do // using do while to print from 0 to user's input
	{
		cout << counter << endl;
		counter++;
	} while (counter <= myInt); // putting the condition such tht it'll only print till user's givien number
	return 0;
}