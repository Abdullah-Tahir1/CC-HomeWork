#include<iostream>
using namespace std;
int main()
{
	int x = 20;
	for (x = 20; x < 25; x++) // using for loop to cycle from 20 to 25
	{
		if (x % 2 == 0) // if the number's remainder is 0 then its even
		{
			cout << x << " - even" << endl;
		}
		else if (x % 2 == 1)// if the number's remainder is 1 then its odd
		{
			cout << x << " - odd" << endl;
		}
	}
	return 0;
}