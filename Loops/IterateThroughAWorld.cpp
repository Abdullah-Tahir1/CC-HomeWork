#include<iostream>
using namespace std;
int main()
{
	string myWord = "Abdullah Is Shareef";
	for (int i = 0; i < myWord.length(); i++)
	{
		cout << myWord.at(i) << endl;
	}
	return 0;
}