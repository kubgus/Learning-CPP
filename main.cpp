#include <iostream>
#include <string>

using namespace std;

int main()
{
    double num1, num2;
    //^ Define 2 variables in one line

    cout << "First Number: ";
    cin >> num1;

    cout << "Second Number: ";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    system("pause");
}