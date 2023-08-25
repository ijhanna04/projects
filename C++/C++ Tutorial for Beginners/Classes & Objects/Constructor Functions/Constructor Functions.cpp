#include <iostream>
using namespace std;

/*
A constructor is a function that is called whenever an object is created
makes it easier to initialize an object with different values
*/

class Book {
    public:
        string title;
        string author;
        int pages;

        Book(){
            title =  "no title";
            author = "no author";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages){         //constructor
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main()
{

    Book book1("Harry Potter","JK Rowling", 500 );

    Book book2("Lord of the Rings", "Tolkein", 700);

    Book book3;

    cout << book1.author << endl;
    cout << book3.title;

    return 0;
}