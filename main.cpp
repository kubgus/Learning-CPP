#include <iostream>

using namespace std;

int main()
{
    int favoriteNumbers[] = {7, 11, 69, 16, 32, 64};
    cout << favoriteNumbers[0] << endl; // 7
    cout << favoriteNumbers[2] << endl; // 69
    favoriteNumbers[0] = 13;
    cout << favoriteNumbers[0] << endl; // 13
    string coolWords[10];
    //               ^ set array length
    coolWords[5] = "incomprehensibilities";
    cout << coolWords[5] << endl; // incomprehensibilities
    cout << coolWords[4] << endl; // *null*

    system("pause");
}