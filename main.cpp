#include <iostream>

using namespace std;

class Book
{
public:
    string title;
    string author;
    int pages;
};

int main()
{
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 300;

    cout << book1.title << endl;  // Harry Potter
    cout << book1.author << endl; // JK Rowling
    cout << book1.pages << endl;  // 300

    Book book2;
    book2.title = "Ur Special";
    book2.author = "Danny Casale";
    book2.pages = 70;

    cout << book2.title << endl;  // Ur Special
    cout << book2.author << endl; // Danny Casale
    cout << book2.pages << endl;  // 70

    system("pause");
}