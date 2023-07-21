/*
Write a program that generates the Fibonacci sequence up to a given number entered by the user. Print each number in the sequence.

fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

Output: 
Enter a number: 5
0, 1, 1, 2, 3, 5, 8

*/

#include<iostream>
using namespace std;

int main() {
    int n;
    int n1 = 0, n2 = 1, n3 = 0;

    cout << "Enter a number: ";
    cin >> n;

    cout << n1 << ", " << n2 << ", ";
    for (int i=0; i<n; i++) {
        n3 = n1 + n2;
        cout << n3 << ", ";
        n1 = n2;
        n2 = n3;
    }

    return 0;
}