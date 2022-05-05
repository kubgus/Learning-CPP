#include <iostream>

using namespace std;

int power(int base, int power)
{
    int result = 1;

    for (int i = 0; i < power; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{
    cout << power(5, 2) << endl; // 25

    system("pause");
}