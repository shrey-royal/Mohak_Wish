#include "../one.h"

int fun() {
    cout << "fun() called\n";
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (b == 0) {
        cout << "Division by zero\n";
        return 1;
    } else {
        cout << "Division: " << (a/b);
        return 0;
    }
    return 0;
}