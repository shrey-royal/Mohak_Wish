#include<iostream>
using namespace std;

class Hospital {
    private:
        string name;
        string doctors[2];
        string nurses[2];
        string patients[10];
    public:
        Hospital(string name, string doctors[], string nurses[], string patients[]) {
            this->name = name;
            for(int i=0; i<2; i++) {
                this->doctors[i] = doctors[i];
                this->nurses[i] = nurses[i];
            }
            for(int i=0; i<10; i++) {
                this->patients[i] = patients[i];
            }
        }

        void display() {
            cout << "Hospital Name: " << this->name << endl;
            cout << "Doctors: ";
            for(int i=0; i<2; i++) {
                cout << this->doctors[i] << ", ";
            }
            cout << endl;
            cout << "Nurses: ";
            for(int i=0; i<2; i++) {
                cout << this->nurses[i] << ", ";
            }
            cout << endl;
            cout << "Patients: ";
            for(int i=0; i<10; i++) {
                cout << this->patients[i] << ", ";
            }
            cout << endl;
        }
};

int main() {
    string name = "Apollo";
    string doctors[2] = {
    "Dr. Benjamin Adams", "Dr. Ava Carter"};

    string nurses[2] = {"Emily Johnson", "Michael Smith"};
    
    string patients[10] = {"John Doe", "Jane Smith", "Michael Johnson", "Emily Brown", "William Davis", "Olivia Wilson", "James Martinez", "Sophia Anderson", "Robert Taylor", "Ava Thomas"};

    Hospital hospital(name, doctors, nurses, patients);
    hospital.display();
    return 0;
}

/*
**Problem Statement: Library Management System**

You are tasked with creating a simple Library Management System using C++ classes. The system should track information about books, library staff, and library patrons. Implement a class called `Library` that has the following attributes:

- `name` (string): The name of the library.
- `librarians` (array of strings): An array containing the names of two librarians.
- `books` (array of strings): An array containing the titles of ten books available in the library.

The `Library` class should have a constructor that initializes the attributes based on the provided values. It should also have a method called `display` that prints out the details of the library, including the library name, the names of the librarians, and the list of available books.

In the `main` function, create an instance of the `Library` class with the following information:

- Library name: "City Public Library"
- Librarians: "Emma Thompson", "William Johnson"
- Books: "The Great Gatsby", "To Kill a Mockingbird", "1984", "Pride and Prejudice", "The Catcher in the Rye", "Harry Potter and the Sorcerer's Stone", "The Hobbit", "Fahrenheit 451", "Brave New World", "Lord of the Rings"

Display the details of the library using the `display` method.

Your code should demonstrate the creation of the `Library` class, the initialization of its attributes, and the proper display of library information.

Remember to provide comments and follow good coding practices to make your code clear and understandable.


*/