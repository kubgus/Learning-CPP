#include <iostream>

using namespace std;

// Superclass
class Chef
{
public:
    void makeChicken()
    {
        cout << "The chef makes chicken." << endl;
    }

    void makeSalad()
    {
        cout << "The chef makes a salad." << endl;
    }

    void makeSpecialDish()
    {
        cout << "The chef makes BQQ ribs." << endl;
    }
};

// Subclass
class ItalianChef : public Chef // Italian Chef inherits all the functions of Chef
{
public:
    void makePasta()
    {
        cout << "The chef makes pasta." << endl;
    }

    void makeSpecialDish()
    {
        cout << "The chef makes a pizza." << endl;
    }
};

int main()
{
    Chef chef;
    chef.makeChicken();     // The chef makes chicken.
    chef.makeSpecialDish(); // The chef makes BQQ ribs.

    ItalianChef italianChef;
    italianChef.makeChicken();     // The chef makes chicken.
    italianChef.makePasta();       // The chef makes pasta.
    italianChef.makeSpecialDish(); // The chef makes a pizza.

    system("pause");
}