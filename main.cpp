#include <iostream>

using namespace std;

int main()
{
    // Always checks the condition before running the code (while loop)
    int index1 = 1;
    while (index1 <= 5)
    {
        cout << index1 << endl; // 1-5
        index1++;
    }

    // Executes the code first before checking the condition to run again (do-while loop)
    int index2 = 6;
    do
    {
        cout << index1 << endl; // 6
        index1++;
    } while (index2 <= 5);

    system("pause");
}