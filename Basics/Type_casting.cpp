#include<iostream>
#include<typeinfo>
using namespace std;

int main() {
    // implicit type casting

    int a = 5;
    float b = a; // implicit type casting

    cout << "The value of a is " << a << "\tType -> " << typeid(a).name() << endl;
    cout << "The value of b is " << b << "\tType -> " << typeid(b).name() << endl;

    // explicit type casting

    float c = 5.5;
    int d = (int)c; // explicit type casting

    cout << "The value of c is " << c << "\tType -> " << typeid(c).name() << endl;
    cout << "The value of d is " << d << "\tType -> " << typeid(d).name() << endl;


    //int2ascii -> int to ascii

    int e;
    cout << "Enter a number: ";
    cin >> e;

    cout << "The ASCII value of " << e << " is " << (char)e << endl;

    char f;
    cout << "Enter a character: ";
    cin >> f;

    cout << "The ASCII value of " << f << " is " << (int)f << endl;

    return 0;
}

/*
Type Casting is a process in which we convert a variable from one data type to another data type.

Syntax:
    (data_type) expression

Types of Type Casting:
    1. Implicit Type Casting - done by compiler
    2. Explicit Type Casting - done by programmer

Implicit Type Casting:
    In Implicit Type Casting, the compiler automatically converts one data type into another data type without any user involvement.

    Example:
        int a = 5;
        float b = a; // Implicit Type Casting

Explicit Type Casting:
    In Explicit Type Casting, the user converts the data type of an object to required data type.

    Example:
        float a = 5.5;
        int b = (int)a; // Explicit Type Casting

    Note: In Explicit Type Casting, there is a loss of data.

Implicit Type Casting Table:
    Data Type   Size (in bytes)
    char        1
    short       2
    int         4
    long        4
    float       4
    double      8
    long double 12

    Note: The data type with smaller size is converted to the data type with larger size.

Explicit Type Casting Table:
    Data Type   Size (in bytes)
    char        1
    short       2
    int         4
    long        4
    float       4
    double      8
    long double 12

    Note: The data type with larger size is converted to the data type with smaller size.

> cycle of casting: char -> int -> float -> double  --> implicit casting
> cycle of casting: double -> float -> int -> char  --> explicit casting

*/