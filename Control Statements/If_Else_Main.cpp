/*
If Else Statement : If Else Statement is used to execute a block of code if a condition is true and another block of code if the condition is false.

Syntax:
if (condition) {
    // code to be executed if condition is true
}
else {
    // code to be executed if condition is false
}

we have 4 types of if else statements:
1. if
syntax:
if (condition) {
    // code to be executed if condition is true
}


2. if else
syntax:
if (condition) {
    // code to be executed if condition is true
}
else {
    // code to be executed if condition is false
}

3. if else if
syntax:
if (condition) {
    // code to be executed if condition is true
}
else if (condition) {
    // code to be executed if condition is true
}
else {
    // code to be executed if condition is false
}


4. nested if else
syntax:
if (condition) {
    // code to be executed if condition is true
    if (condition) {
        // code to be executed if condition is true
    }
    else {
        // code to be executed if condition is false
    }
}
else {
    // code to be executed if condition is false
}

*/

#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    //scan a, b, c
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    // if
    if (a > b) {
        cout << "a is greater than b" << endl;
    }

    // if else
    if (a > b) {
        cout << "a is greater than b" << endl;
    }
    else {
        cout << "b is greater than a" << endl;
    }

    // if else if
    if (a > b) {
        cout << "a is greater than b" << endl;
    }
    else if (b > c) {
        cout << "b is greater than c" << endl;
    }
    else {
        cout << "c is greater than a and b" << endl;
    }

    // nested if else
    if (a > b) {
        cout << "a is greater than b" << endl;
        if (a > c) {
            cout << "a is greater than c" << endl;
        }
        else {
            cout << "c is greater than a" << endl;
        }
    }
    else {
        cout << "b is greater than a" << endl;
    }

    return 0;

}

/* make a switch case of it
Tasks:
1. Write a program to check whether a number is positive or negative.
2. Write a program to check whether a number is even or odd.
3. Write a program to check whether a number is divisible by 5 and 11 or not.
4. Write a program to check whether a number is divisible by 5 or 11 or both.
5. Write a program to check whether a number is positive, negative or zero.
6. Write a program to check whether a number is alphabet or not.
7. Write a program to check whether a character is alphabet or not.
8. Write a program to check whether a character is vowel or consonant.
9. Write a program to check whether a character is uppercase or lowercase alphabet.
10. Write a program to check whether a year is leap year or not.
11. Write a program to check whther a string is palindrome or not.
12. Write a program to check whther a string has all unique characters or not.
13. Write a program to check whther a string has only vowels or not.
14. Write a program to check whther a string has only consonants or not.
15. Write a program to check whther a string has only digits or not.
16. Write a program to check whther a string has only uppercase or not.
17. Write a program to check whther a string has only lowercase or not.
18. Write a program to check whther a string has only special characters or not.
*/