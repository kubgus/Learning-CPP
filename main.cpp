#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numOne;
    int numTwo;

    cout << "First Number: ";
    cin >> numOne;

    cin.clear();
    cin.sync();

    cout << "Second Number: ";
    cin >> numTwo;

    cout << numOne << " + " << numTwo << " = " << numOne + numTwo << endl;

    system("pause");
}