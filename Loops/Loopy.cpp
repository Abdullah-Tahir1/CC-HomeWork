#include <iostream>
using namespace std;
int main() {
    int myInt;
    int counter = 0;
    cout << "Enter a number: ";
    cin >> myInt;
    while (counter <= myInt)
    {
        cout << counter << endl;
        counter++;
    }
    return 0;
}