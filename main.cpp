#include <iostream>

using namespace std;

int getMaxFrom2(int num1, int num2)
{
    int result;

    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }

    return result;
}

int getMaxFrom3(int num1, int num2, int num3)
{
    int result;

    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }

    return result;
}

int main()
{
    cout << getMaxFrom2(3, 10) << endl; // 10
    cout << getMaxFrom2(5, 4) << endl;  // 5
    cout << getMaxFrom2(6, 6) << endl;  // 6

    cout << getMaxFrom3(3, 10, 5) << endl; // 10
    cout << getMaxFrom3(5, 4, 13) << endl; // 13
    cout << getMaxFrom3(6, 6, 6) << endl;  // 6

    system("pause");
}