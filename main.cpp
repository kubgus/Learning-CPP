#include <iostream>

using namespace std;

int main()
{
    // All lines beginning with '//' are ignored as comments
    cout << "Hello World!" << endl;
    // cout << "This is ignored." << endl;
    cout << "This is not ignored." << endl;

    // Comments are used to describe code or
    // ignore certain lines of code until you
    // need them later

    // Many IDEs and Text editors like VS Code
    // allow you to press CTRL+/ to automatically
    // comment out a line

    cout << "You can also add a comment at the end of a line." << endl; // like this

    cout << "Comments can also look..." /* like this */ << endl;
    /*
        These can be used to write
        multiple lines of comments or
        add comments right into the lines
    */

    system("pause");
}