#include <iostream>

using namespace std;

void sayGoodbye(string name)
{
    cout << "Goodbye, " << name << "..." << endl;
}

void sayHi(string name, int age);
//^ This line defines the function at the top
//^ so the actual code can be at the bottom
//^ The code in the curly brackets can go up here
//^ as well, this is just more pleasant to read like this

int main()
{
    sayHi("Jakub", 14);
    sayHi("Mike", 120);
    sayHi("Steve", 64);

    sayGoodbye("Rick Astley");

    system("pause");
}

void sayHi(string name, int age)
{
    cout << "Hello, " << name << "!!" << endl;
    cout << "You are " << age << " years old." << endl;
}