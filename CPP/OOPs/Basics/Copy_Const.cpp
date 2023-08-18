#include<iostream>
using namespace std;

class Student {
    int roll;
    string name;
    public:
        Student(int r, string n) {
            roll = r;
            name = n;
        }

        Student(const Student &old_obj) { // Copy Constructor
            roll = old_obj.roll;
            name = old_obj.name;
        }
        void display() {
            cout << roll << " " << name << endl;
        }
};

int main() {
    Student s1(101, "Rohit");
    // Student s2 = s1; // Copy Constructor
    Student s2(s1); // Copy Constructor
    s1.display();
    s2.display();
    return 0;
}