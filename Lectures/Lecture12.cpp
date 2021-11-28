#include<iostream>
using namespace std;
int main()
{
	int ages[5];
	ages[0] = 19;
	ages[1] = 23;
	ages[2] = 22;
	ages[3] = 30;
	ages[4] = 18;

	int heartRates[8] = { 54, 60, 71, 59, 62, 63, 60, 58 };
	cout << heartRates[3] << endl;
	cout << heartRates[6] << endl;

	int heartRates[8] = { 54, 60, 71, 59, 62, 63, 60, 58 };
	for (int i = 0; i < 8; i++) {
		cout << heartRates[i] << endl;
	}
	return 0;
}