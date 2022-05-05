#include <iostream>

using namespace std;

string getDayName(int dayNum)
{
    string dayName;

    // Cleaner than if statements
    switch (dayNum)
    {
    case 0:
        dayName = "Sunday";
        break; // don't check for other cases below if this one is true
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        dayName = "Invalid Day Number";
    }

    return dayName;
}

int main()
{
    int dayNum;

    cout << "Day Number: ";
    cin >> dayNum;

    cout << getDayName(dayNum) << endl;

    system("pause");
}