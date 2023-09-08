#include<iostream>
#include<math.h>
using namespace std;

void add(int a, int b) {
    cout << "Addition of " << a << " and " << b << " is " << a + b << endl;
}

void sub(int a, int b) {
    cout << "Subtraction of " << a << " and " << b << " is " << a - b << endl;
}

void mul(int a, int b) {
    cout << "Multiplication of " << a << " and " << b << " is " << a * b << endl;
}

void quotient(int a, int b) {
    cout << "Quotient of " << a << " and " << b << " is " << a / b << endl;
}

void remainder(int a, int b) {
    cout << "Remainder of " << a << " and " << b << " is " << a % b << endl;
}

void power(int base, int power) {
    // int result = 1;
    // for (int i = 0; i < power; i++) {
    //     result *= base;
    // }
    // cout << result << endl;

    cout << "Power of " << base << "^" << power << " is " << pow(base, power);
}