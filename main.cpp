#include <iostream>
#include <cmath>
//^ This is IMPORTANT

using namespace std;

int main()
{
    cout << 10 + 3 << endl; // 13
    cout << 10 - 3 << endl; // 7
    cout << 10 * 3 << endl; // 30
    cout << 10 / 3 << endl; // 3
    cout << 10 % 3 << endl; // 1
    //^ This is MOD, it returns the remainder of division
    //^ i.e. 10 / 3 = 3, so the result is 1
    cout << 4 + 5 * 10 << endl; // 54
    //^ Multiplication happens first (order of operation)
    cout << (4 + 5) * 10 << endl; // 90
    //^ Same here
    int number = 42;
    cout << number << endl; // 42
    number++;
    cout << number << endl; // 43
    number += 377;
    cout << number << endl; // 420
    number--;
    cout << number << endl;      // 419
    cout << 10 / 3 << endl;      // 3
    cout << 10.0 / 3 << endl;    // 3.33333
    cout << pow(5, 2) << endl;   // 25
    cout << sqrt(25) << endl;    // 5
    cout << round(4.3) << endl;  // 4
    cout << round(4.5) << endl;  // 5
    cout << ceil(4.3) << endl;   // 5
    cout << floor(4.5) << endl;  // 4
    cout << fmax(3, 10) << endl; // 10
    cout << fmax(5, 4) << endl;  // 5
    cout << fmin(3, 10) << endl; // 3
    cout << fmin(5, 4) << endl;  // 4

    system("pause");
}