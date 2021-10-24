#include<iostream>
using namespace std;
int main()
{
	int TotalMoney = 50; // Initializing total money
	int Price = 6; // Initializing cost of a single USB
	cout << "She can buy " << TotalMoney / Price << " sticks" << endl; // 50 / 6 = 8
	cout << "And she'll have " << TotalMoney % Price << " AED left" << endl; // 50 % 6 = 2
	return 0;
}
