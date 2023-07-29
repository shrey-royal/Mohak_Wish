#include<iostream>
using namespace std;

bool isPrime(int num) {    
    if (num <= 1) return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        switch (isPrime(i)) {
            case true:  cout << i << " is a prime number." << endl;
        }
    }
    
    return 0;
}