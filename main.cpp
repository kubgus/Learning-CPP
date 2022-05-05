#include <iostream>
#include <string>

using namespace std;

int main()
{
    double num1, num2, result;
    char op;

    cout << "First Number: ";
    cin >> num1;

    cout << "Operator: ";
    cin >> op;

    cout << "Second Number: ";
    cin >> num2;

    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '*' || op == 'x' || op == '.')
    {
        result = num1 * num2;
    }
    else if (op == '/' || op == ':')
    {
        result = num1 / num2;
    }
    else
    {
        cout << "Invalid Operator: " << op << endl;
    }

    cout << result << endl;

    system("pause");
}