#include <iostream>
using namespace std;

/* 
A class is a blueprint/specification/template for a new data type (existing data types: string, int, double, etc.)
An object is an instance of a class
*/

class Book {
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
    book1.pages = 500;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    cout << book2.author;

    return 0;
}