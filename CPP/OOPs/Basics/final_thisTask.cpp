// 5. "Design a class 'MobilePhone' to model a mobile phone owned by a person. Each phone has a unique phone number and a contact list. Write a member function 'addContact(string name, string number)' that takes a name and phone number as parameters and uses the 'this' pointer to add the contact to the current phone's contact list."

#include<iostream>
#include<string>
using namespace std;

class MobilePhone {
private:
    string phoneNumber; //this is his/her personal number
    static const int MAX_CONTACTS = 100;
    string contactNames[MAX_CONTACTS];
    string contactNumbers[MAX_CONTACTS];
    int numContacts;    //stores current number of contacts

public:
    // MobilePhone(const string& number) : phoneNumber(number), numContacts(0) { }

    MobilePhone(const string& phoneNumber) {
        this->phoneNumber = phoneNumber;
        numContacts = 0;
    }

    void addContact(const string& name, const string& number) {
        if(numContacts < MAX_CONTACTS) {
            contactNames[numContacts] = name;
            contactNumbers[numContacts] = number;
            numContacts++;
        } else {
            cout << "Contact list is full. Cannot add more contacts." << endl;
        }
    }

    void displayContacts() {
        cout << "\n\nContacts in " << phoneNumber << "'s phone: " << endl;
        for (int i = 0; i < numContacts; i++) {
            cout << "Name: " << contactNames[i] << ", Number: " << contactNumbers[i] << endl;
        }
    }
};

int main() {
    MobilePhone Shrey("+91-834-711-7023");

    Shrey.addContact("Mohak", "+91-456-987-3165");
    Shrey.addContact("DL Sir", "+91-777-895-4897");
    Shrey.addContact("Zafar Sir", "+91-789-123-4568");
    Shrey.addContact("Krutarth Sir", "+91-122-345-6789");

    Shrey.displayContacts();
}