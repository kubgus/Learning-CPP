#include <iostream>

using namespace std;

int main()
{
    // Explanation here: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=10751s // freeCodeCamp.org // I'm too lazy

    int age = 32;
    double gpa = 1.6;
    string name = "Kubo";

    cout << "Age: " << &age << endl;   // 0x0000
    cout << "GPA: " << &gpa << endl;   // 0x0000
    cout << "Name: " << &name << endl; // 0x0000

    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    cout << "Age: " << pAge << endl;   // 0x0000
    cout << "GPA: " << pGpa << endl;   // 0x0000
    cout << "Name: " << pName << endl; // 0x0000

    // Dereferencing
    cout << "Age: " << *pAge << endl;   // 32
    cout << "GPA: " << *pGpa << endl;   // 1.6
    cout << "Name: " << *pName << endl; // Kubo

    system("pause");
}