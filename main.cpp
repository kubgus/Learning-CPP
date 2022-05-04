#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age: "; // no endl
    cin >> age;
    cout << "You are " << age << " years old." << endl;

    string name;
    cout << "Enter your name: "; // no endl
    cin.clear();
    cin.sync();
    //^ These two lines flush the input buffer after one
    //^ input has already been registered
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;

    system("pause");
}