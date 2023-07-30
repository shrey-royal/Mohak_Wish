#include<iostream>
#include<typeinfo>
using namespace std;

class Sample {
    public:
    int a;
    float b;
    char c;
    double d;

    Sample() {
        cout << "Default Constructor Invoked!" << endl;
        a = 10; b = 20.5; c = 'A'; d = 30.5;
        cout << "Default Values are Initialized!" << endl;
    }
};

int main() {
    Sample s1; // Default Constructor
    
    cout << "a = " << s1.a << "\t\tType: " << typeid(s1.a).name() << endl;
    cout << "b = " << s1.b << "\tType: " << typeid(s1.b).name() << endl;
    cout << "c = " << s1.c << "\t\tType: " << typeid(s1.c).name() << endl;
    cout << "d = " << s1.d << "\tType: " << typeid(s1.d).name() << endl;
    
    return 0;
}


/*
> Constructors are special member functions of a class. They are executed whenever an object of that class is created. 
> They are used to initialize the data members of new object generally.
> Constructors are of two types: Default and Parameterized.
> Default constructors are the constructors that are called when the object is created without passing any arguments to it.
> Parameterized constructors are called when one or more arguments are passed while creating the object.
> Constructors have same name as the class and do not have any return type.

Rules for defining constructors:
    1. It should be declared in the public section of the class.
    2. We have to pass no arguments in default constructor, but we can pass arguments in parameterized constructor and it is compulsory to pass arguments.
    3. It cannot have return type, not even void.

*/

/*
Tasks: 

1. Online Shopping Cart:
You are developing an online shopping website, and you need to implement a "ShoppingCart" class. The default constructor of this class will initialize the cart with default values such as an empty list of items, total cost set to zero, and a default currency (e.g., USD). Create an object of the "ShoppingCart" class using the default constructor and display the initial details of the cart.

2. Employee Database:
You are building an application to manage employee data for a company. Implement an "Employee" class with data members like name, employee ID, designation, and salary. The default constructor will initialize the employee with default values like "Unknown" for name and designation, ID set to zero, and salary set to the minimum wage. Create an object using the default constructor to represent a new employee and display their details.

3. Temperature Sensor:
Imagine you are working on an Internet of Things (IoT) project involving temperature sensors. Create a "TemperatureSensor" class with data members to store the current temperature reading, sensor ID, and location. The default constructor initializes the sensor with a default temperature value, sets the ID as "Unknown," and location as "Unspecified." Create an object of the "TemperatureSensor" class using the default constructor and display its properties.

4. School Attendance Tracker:
You are developing a system to track student attendance in a school. Implement a "Student" class with data members for student name, roll number, class, and attendance status. The default constructor will set the attendance status to "Absent" by default. Create an object of the "Student" class using the default constructor to represent a new student and display their attendance status.

5. Car Rental System:
Design a "Car" class to represent cars available for rent in a car rental system. The class should have attributes like car brand, model, year, and rental status. The default constructor initializes the car with default values like "Unknown" for brand and model, year set to the current year, and rental status as "Available." Create an object of the "Car" class using the default constructor and display its details.
*/