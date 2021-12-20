#include<iostream>
using namespace std;
int main()
{
	int sum = 0; // Initilizing an int variable "sum" with 0 value
	for (int i = 100; i < 201; i++) // Using for loop to cycle through the number 0 - 200
	{
		if (i % 9 == 0) // using if statement and putting the condition such that if the number is divisible by 9, it'll add it to sum
		{
			sum += i;
		}
	}
	cout << "The sum of every 9, from 100 to 200 is: " << sum << endl; // Printing out the anwer
	return 0;
}