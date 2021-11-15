#include<iostream>
using namespace std;
int main()
{
	int x = 20;
	for (x = 20; x < 25; x++)
	{
		if (x % 2 == 0)
		{
			cout << x << " - even" << endl;
		}
		else if (x % 2 == 1)
		{
			cout << x << " - odd" << endl;
		}
		else
		{
			cout << "Invalid" << endl;
		}
	}
	return 0;
}