//Parameterized Constructor
#include<iostream>
using namespace std;

class Student {
    private:    //instance variables
    string college_name;
    string student_name;
    string branch;
    short sem;
    float cgpa;

    public:

    Student(string clg, string stu, string brnch, short s, float takka) {
        college_name = clg;
        student_name = stu;
        branch = brnch;
        sem = s;
        cgpa = takka;
    }

    void display() {
        cout << endl;
        cout << "College Name: " << college_name << endl;
        cout << "Student Name: " << student_name << endl;
        cout << "Branch: " << branch << endl;
        cout << "Semester: " << sem << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    string clg, stu, brnch;
    short s;
    float prcnt;

    cout << "Enter College Name: ";
    getline(cin, clg);  //to input string with spaces
    cout << "Enter Student Name: ";
    getline(cin, stu);
    cout << "Enter Branch: ";
    getline(cin, brnch);
    cout << "Enter Semester: ";
    cin >> s;
    cout << "Enter CGPA: ";
    cin >> prcnt;
    cin.ignore();   //to ignore the newline character

    Student s1(clg, stu, brnch, s, prcnt);  //object creation
    Student s0("NIT", "Jaynam Sir", "CSE", 3, 9.5);
    s1.display();
    s0.display();


    return 0;
}
/*
getline(source, dest);

Do the same thing but the data should be printed in the tabular format.

Scan 5 students details and print them in the following format:
Table Format: 

--------------------------------------------------------------------------------------------
College Name        | Student Name  | Branch                           | Semester | CGPA
--------------------------------------------------------------------------------------------
IIITDM Kancheepuram | Naimish       | Computer Science and Engineering | 3        | 9.5
IIITDM Kancheepuram | Naimish       | Computer Science and Engineering | 3        | 9.5
IIITDM Kancheepuram | Naimish       | Computer Science and Engineering | 3        | 9.5
IIITDM Kancheepuram | Naimish       | Computer Science and Engineering | 3        | 9.5
IIITDM Kancheepuram | Naimish       | Computer Science and Engineering | 3        | 9.5
--------------------------------------------------------------------------------------------


*/