#include<iostream>
using namespace std;

class MyCustomException : public exception {
public:
    const char* what() const throw() {
        // return "Something bad happened!";
        return "Exception: Why did you do that?";
    }
};

class DivisionException : public exception {
public:
    const char* what() const throw() {
        return "Exception: Division by zero is not allowed!";
    }
};

int main() {
    // try {
    //     int x = 0, y = 0;
    //     cout << "Enter x and y: ";
    //     cin >> x >> y;

    //     if(x != 0 || y != 0) {
    //         throw MyCustomException();  // throw exception
    //         // MyCustomException obj;
    //         // throw obj;
    //     } else {
    //         cout << "The values aren't changed yet!" << endl;
    //     }
    // } catch(exception& obj) {
    //     cout << obj.what() << endl;
    // }

    try {
        int x = 0, y = 0;
        cout << "Enter x and y: ";
        cin >> x >> y;

        if(y == 0) {
            throw DivisionException();
        } else {
            cout << "x / y = " << x / y << endl;
        }
    }
    catch(exception& e) {
        cerr << e.what() << endl;
        // cout << "abcd";
    }
    return 0;
}

/*
Tasks:

Problem Statement:

Create a C++ program that simulates a simple banking system. Implement a custom exception class called "InsufficientFundsException" to handle cases where a user tries to withdraw more money from their account than their balance allows. The program should include the following functionality:

1. Create a class named "BankAccount" with the following attributes:
   - Account number
   - Account holder's name
   - Account balance

2. Implement a constructor for the "BankAccount" class to initialize the account details.

3. Create a member function "withdraw" that allows the user to withdraw a specified amount of money from their account. If the withdrawal amount is greater than the account balance, throw an "InsufficientFundsException" custom exception.

4. Create a member function "display" that displays the account details, including the account number, account holder's name, and account balance.

5. In the main program, create two instances of the "BankAccount" class and demonstrate the following actions:
   - Initialize the accounts with initial balances.
   - Attempt to withdraw an amount from each account, catching and handling any "InsufficientFundsException" exceptions that may occur.
   - Display the account details after each withdrawal attempt.

Ensure that the custom exception class "InsufficientFundsException" is properly defined and thrown when necessary.

Here's a simplified outline of the C++ code structure:

```cpp
#include <iostream>
#include <string>

// Custom exception class
class InsufficientFundsException : public std::exception {
public:
    virtual const char* what() const throw() {
        return "Insufficient funds to perform the withdrawal.";
    }
};

// BankAccount class
class BankAccount {
private:
    // Account attributes
    int accountNumber;
    std::string accountHolderName;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(int number, std::string name, double initialBalance);

    // Member function to withdraw money
    void withdraw(double amount);

    // Member function to display account details
    void display();
};

// Implement the BankAccount methods

int main() {
    // Create two BankAccount instances
    // Initialize and perform transactions
    // Handle InsufficientFundsException where necessary
    return 0;
}
```

You should complete the implementation of the "BankAccount" class and the main program to demonstrate the functionality described in the problem statement.

*/