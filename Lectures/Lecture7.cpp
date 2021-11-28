#include<iostream>
using namespace std;
int main()
{
	int porridgeTemperature = 56;
	if ((porridgeTemperature > 40) && (porridgeTemperature < 60))
	{
		cout << "That's just right!" << endl;
	}
	cout << endl;
	bool hasVisa = false;
	bool hasDrivingLicense = true;
	if ((hasVisa == true) || (hasDrivingLicense == true))
	{
		cout << "You are permitted to drive" << endl;
	}
	else {
		cout << "Sorry, you can’t" << endl;
	}
	cout << endl;
	int brotherA = 15;
	int brotherB = 12;
	if (!(brotherA < brotherB)) {
		cout << "Brother A is older" <<
			endl;
	}
	cout << endl;
	hasVisa = false;
	hasDrivingLicense = true;
	bool drunk = false;
	if ((hasVisa || hasDrivingLicense) && !drunk)
	{
		cout << "You can drive" << endl;
	}
	else {
		cout << "Sorry, you can't " << endl;
	}
	cout << endl;
	bool zombieAtDoor = true;
	bool decideToFight = false;
	// This is the nested if-else statement that governs the decisions
	if (zombieAtDoor) {
		if (decideToFight) {
			cout << "Grab a weapon and fight for your life!" << endl;
		}
		else {
			cout << "Run away, as fast as you can!" << endl;
		}
	}
	else {
		cout << "Let the civilian in" << endl;
	}
	return 0;
}