/*
Make a copy constructor to copy the values of one object to another object.
A real world example would be to make a copy of an existing book to create a new book.
*/

#include<iostream>
using namespace std;

class Book {
    private:
        string title;
        string author;
        int pages;
    
    public:
        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }

        Book(const Book &oldBook) { // Copy Constructor
            title = oldBook.title;
            author = oldBook.author;
            pages = oldBook.pages;
        }

        void display() {
            cout << title << " " << author << " " << pages << endl;
        }
};

int main() {
    Book book1("Harry Potter", "JK Rowling", 500);
    // Book book2 = book1; // Copy Constructor (Shallow Copy)
    Book book2(book1); // Copy Constructor (Deep Copy)
    book1.display();
    book2.display();
    return 0;
}