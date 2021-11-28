#include<iostream>
using namespace std;
int main()
{
	string courses[] = { "BSU CC", "BSU BA", "HNC CC", "HND"};
	for (int i = 0; i < 4; i++) 
	{
		cout << courses[i] << endl;
	}
	for (auto course : courses) //range based for loop 
	{
		cout << course << endl;
	}
	char letters[] = { 'C', 'o', 'd', 'e', 'L', 'a', 'b' };
	for (auto letter : letters) 
	{
		cout << letter;
	}
	string snacks[3][4] = 
	{
		{"Galaxy silk", "Mars Bar", "Snickers","Bounty"},//first row
		{"Flavoured Youghurt", "Oman chips","Oreo","Lays"}, //second row
		{"Apple", "Banana","Orange","Pear"} //third row
	};
	cout << snacks[1][2] << endl; //access Oreo
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 4; j++) {
			cout << snacks[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}