#include<iostream>
using namespace std;

int factorial(int num);

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}

int factorial(int num) {
    if (num == 0) {
        return 1;
    }
    return num * factorial(num - 1);
}