#include <iostream>
#include <string>

using namespace std;

int main()
{
    string verb1, adjective1, verb2, noun1;

    cout << "Enter a VERB ENDING WITH -ING: ";
    getline(cin, verb1);

    cout << "Enter an ADJECTIVE: ";
    getline(cin, adjective1);

    cout << "Enter another VERB ENDING WITH -ING: ";
    getline(cin, verb2);

    cout << "Enter a NOUN RELATED TO THE LAST VERB: ";
    getline(cin, noun1);

    cout << "I started " << verb1 << " C++." << endl;
    cout << "My experience was completely " << adjective1 << "." << endl;
    cout << "I started " << verb2 << " " << noun1 << " less often." << endl;

    system("pause");
}