#include <iostream>

using namespace std;

int main()
{
    // 2D Array / Matrix
    int grid[3][2] = {{1, 2},
                      {3, 4},
                      {5, 6}};

    cout << grid[0][0] << endl; // 1
    cout << grid[1][0] << endl; // 3
    cout << grid[2][1] << endl; // 6

    system("pause");
}