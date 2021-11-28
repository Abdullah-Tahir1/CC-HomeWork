#include<iostream>
using namespace std;
int main()
{
	int a; int b; int c; a = 3; b = 4; c = 5; b = c; a = b;
	cout << a << endl;
	a = 3; b = 3; c = 4; c = b; b = a; a = c;
	cout << a << endl;
	double a1 = 3.0; double b1 = 6.0; double c1 = b1 / a1; a1 = c1;
	cout << a1 << endl;
	a = 1; b = 4; a = a * b;
	cout << a << endl;
	a = 3; b = 2; a = a % b;
	cout << a << endl;
	cout << endl;
	int x = 9;
	if (x == 7) {
		cout << "x IS equal to 7" << endl;
	}
	cout << endl;
	x = 9;
	if (x == 7)
	{
		cout << "x IS equal to 7" << endl;
	}
	else
	{
	cout << "x IS NOT equal to 7" << endl;
	}
	cout << endl;
	bool isRaining = false;
	if (isRaining == true) {
		cout << "Take an Umbrella" << endl;
	}
	else {
		cout << "Leave the Umbrella" << endl;
	}
	cout << endl;
	bool monday = true;
	bool sunday = false;
	if (monday == true)
	{
		cout << "Set alarm for 10 gotta be in CodeLab 1" << endl;
	}
	else if (sunday == true) 
	{
		cout << "Set alarm for 10 gotta be in CodeLab 1" << endl;
	}
	else 
	{
		cout << "No session for codelab 1" << endl;
	}
	cout << endl;
	sunday = true;
	monday = false;
	bool tuesday = false, wednesday = false, thursday = false;
	if (sunday == true) {
		cout << "Set alarm for 10 gotta be in CodeLab 1 session" << endl;
	}
	else if (monday == true) {
		cout << "Set alarm for 10 gotta be in CodeLab 1 session" << endl;
	}
	else if (tuesday == true) {
		cout << "No session for CodeLab1 ;Check timetable for other modules" << endl;
	}
	else if (wednesday == true) {
		cout << "No session for CodeLab1 ;Check timetable for other modules " << endl;
	}
	else if (thursday == true) {
		cout << "No session for CodeLab1 ;Check timetable for other modules " << endl;
	}
	else {
		cout << "Must be the weekend :Holiday Time" << endl;
	}
	cout << endl;

	return 0;
}