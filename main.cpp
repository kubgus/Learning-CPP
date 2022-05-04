#include <iostream>

using namespace std;

double cube(double number)
{
    return number * number * number;
}

int main()
{
    double answer = cube(5.0);
    cout << answer << endl; // 125

    system("pause");
}