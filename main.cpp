#include <iostream>

using namespace std;

int main()
{
    string phrase = "My name is kubgus!";
    cout << phrase << endl;
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    phrase[0] = 'B';
    cout << phrase << endl;
    cout << phrase.find("By", 0) << endl;
    cout << phrase.find("kubgus", 5) << endl;
    string phrasePart = phrase.substr(3, 4);
    cout << phrasePart << endl;

    system("pause");
}