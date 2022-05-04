#include <iostream>

using namespace std;

int main()
{
    bool knowledge = true;
    bool confidence = true;

    // I didn't choose to write curly brackets on the next line, my formatter did, sorry

    if (knowledge && confidence)
    {
        cout << "You are smart and confident." << endl;
    }
    else if (knowledge && !confidence)
    {
        cout << "You are smart, but you don't like talking about it." << endl;
    }
    else if (!knowledge && confidence)
    {
        cout << "You pretend to be smart." << endl;
    }
    else
    {
        cout << "You just need more time." << endl;
    }

    if (knowledge || confidence)
    {
        cout << "At least one parameter is true." << endl;
    }
    else
    {
        cout << "Both parameters are false." << endl;
    }

    system("pause");
}