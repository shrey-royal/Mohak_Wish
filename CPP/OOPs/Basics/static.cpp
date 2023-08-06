/*
static keyword is used to make a variable or function static.

when you use static keyword with a variable/method then that variable/method gets memory in data segment of the program instead of getting memory in stack segment of the program.

static variable/method can be accessed without creating an object of the class. 
why?
because static variable/method gets memory in data segment of the program instead of getting memory in stack segment of the program.
*/

#include<iostream>
using namespace std;

class Account {
public:
    // static variable
    static int count;

    Account() {
        count++;
    }
};

int Account::count = 0;

int main() {

    // static variable
    cout << "\nInitial Value: " << Account::count << endl;
    
    Account caMohakBhai, caVishwaBen, caUpendraBhai;
    cout << caMohakBhai.count << endl;
    cout << caVishwaBen.count << endl;
    cout << caUpendraBhai.count << endl;

    // static variable
    cout << "\nFinal Variable: " << Account::count << endl;

    return 0;
}

/*
TASSSSK:
1. "Create a class 'Counter' to keep track of the number of instances created. Use a static member variable 'instanceCount' to store the total number of objects created from the class and increment it every time an object is constructed."

2. "Implement a 'MathUtility' class with a static member function 'factorial(int n)' that calculates and returns the factorial of a given integer 'n'. The function should be accessible without creating an instance of the class."

3. "Design a 'Bank' class to represent a bank's financials. Use a static member variable 'totalAssets' to keep track of the sum of all customer account balances, and update it automatically every time a new account is created or an existing account balance changes."

4. "Develop a 'Student' class to represent students' academic records. Use a static member function 'calculateAverageScore(Student* students, int count)' that takes an array of 'Student' objects and calculates the average score of all the students."

5. "Create a 'Logger' class to maintain a log of system events. Use a static member function 'logEvent(string message)' to add entries to the log without creating an instance of the class. The log should be accessible and shared across all instances of the 'Logger' class."


*/