#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "1. Write a program to check whether a number is positive or negative.\n";
    cout << "2. Write a program to check whether a number is even or odd.\n";
    cout << "3. Write a program to check whether a number is divisible by 5 and 11 or not.\n";
    cout << "4. Write a program to check whether a number is divisible by 5 or 11 or both.\n";
    cout << "5. Write a program to check whether a number is positive, negative or zero.\n";
    cout << "6. Write a program to check whether a number is alphabet or not.\n";
    cout << "7. Write a program to check whether a character is alphabet or not.\n";
    cout << "8. Write a program to check whether a character is vowel or consonant.\n";
    cout << "9. Write a program to check whether a character is uppercase or lowercase alphabet.\n";
    cout << "10. Write a program to check whether a year is leap year or not.\n";
    cout << "11. Write a program to check whther a string is palindrome or not.\n";
    cout << "12. Write a program to check whther a string has all unique characters or not.\n";
    cout << "13. Write a program to check whther a string has only vowels or not.\n";
    cout << "14. Write a program to check whther a string has only consonants or not.\n";
    cout << "15. Write a program to check whther a string has only digits or not.\n";
    cout << "16. Write a program to check whther a string has only uppercase or not.\n";
    cout << "17. Write a program to check whther a string has only lowercase or not.\n";
    cout << "18. Write a program to check whther a string has only special characters or not.\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (num > 0)
            cout << "Positive\n";
        else if (num < 0)
            cout << "Negative\n";
        else
            cout << "Zero\n";
        break;
    case 2:
        cout << "Enter a number: ";
        cin >> num;
        if (num % 2 == 0)
            cout << "Even\n";
        else
            cout << "Odd\n";
        break;
    
    default:
        break;
    }


    return 0;
}

/*
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