#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    string major;
    double gpa;

    Student(string aName, string aMajor, double aGpa)
    {
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

    bool hasHonors()
    {
        if (gpa >= 3.5)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Student student1("Jake", "Programming", 4.5);
    Student student2("Matthew", "Medicine", 2.6);

    cout << student1.hasHonors() << endl; // 1
    cout << student2.hasHonors() << endl; // 0

    system("pause");
}