// class class_name {
//     // ...
//     friend return_type function_name (parameters);
//     // ...
// };

#include<iostream>
using namespace std;

class Distance {
private:
    int meters;

public:
    Distance() {
        meters = 0;
    }

    void displayInfo() {
        cout << "Meters: " << meters << endl;
    }

    friend void addValue(Distance &d);
};

void addValue(Distance &d) {
    d.meters += 5;
}

int main() {
    Distance d1;
    d1.displayInfo();
    addValue(d1);
    d1.displayInfo();
}

/*
Tasks:

1. Friendship with a Class: Create two classes, 'ClassA' and 'ClassB'. Make 'ClassB' a friend of 'ClassA', and implement a friend function in 'ClassB' that accesses the private members of 'ClassA'.

2. Matrix Addition: Implement a matrix class with overloaded operators for matrix addition. Use a friend function to perform the addition operation between two matrix objects.

3. Complex Number Arithmetic: Create a class for complex numbers with overloaded operators for addition, subtraction, multiplication, and division. Use friend functions to perform arithmetic operations between two complex numbers.

4. Rectangle Area: Design a class for a rectangle with private attributes 'length' and 'width'. Implement a friend function to calculate and display the area of a rectangle object.

5. Distance Calculation: Create a class for representing 3D points with private attributes 'x', 'y', and 'z'. Define a friend function to calculate the Euclidean distance between two points.

6. String Concatenation: Develop a class to represent strings and overload the '+' operator to concatenate two strings. Use a friend function to implement string concatenation.

7. Fraction Simplification: Design a class for fractions with private attributes 'numerator' and 'denominator'. Implement a friend function to simplify a fraction by finding the greatest common divisor (GCD) and dividing both numerator and denominator.

8. Employee Payroll Calculation: Create a class to store employee details such as name, ID, and salary. Implement a friend function to calculate the total payroll of a group of employees.

9. Time Addition: Design a class for representing time in hours and minutes. Overload the '+' operator to add two time objects and use a friend function to perform the addition.

10. Password Validation: Create a class for user authentication that stores a username and password. Implement a friend function to validate a user's password by comparing it to a predefined password.

*/