#include <iostream>

using namespace std;

class Book
{
public:
    string title;
    string author;
    int pages;

    Book() // Executed when values are not provided
    {
        title = "No Title";
        author = "No Author";
        pages = 0;
    }

    Book(string aTitle, string aAuthor, int aPages)
    {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};

int main()
{
    Book book1("Harry Potter", "JK Rowling", 300);
    Book book2("Ur Special", "Ur Special", 70);

    cout << book1.title << endl; // Harry Potter
    cout << book2.pages << endl; // 70

    book2.pages = 90;

    cout << book2.pages << endl; // 90

    Book book3;

    cout << book3.author << endl; // No Author

    system("pause");
}