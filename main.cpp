#include <iostream>

using namespace std;

int main()
{
    string phrase = "My name is kubgus!";
    cout << phrase << endl;          // My name is kubgus!
    cout << phrase.length() << endl; // 18
    cout << phrase[0] << endl;       // M
    phrase[0] = 'B';
    cout << phrase << endl;                   // By name is kubgus!
    cout << phrase.find("By", 0) << endl;     // 0
    cout << phrase.find("kubgus", 5) << endl; // 11
    string phrasePart = phrase.substr(3, 4);
    cout << phrasePart << endl; // name

    system("pause");
}