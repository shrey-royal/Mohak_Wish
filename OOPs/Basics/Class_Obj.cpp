// Class PiroGrams -> methods -> Palindrome String / Fibonacci Series / Sort an array (descending order)
#include<iostream>
using namespace std;

class PiroGrams {
    public:

    // Palindrome String
    bool PalindromeChecker(string str) {
        int len = str.length();
        for(int i=0; i<len; i++) {
            if(str[i] != str[len-i-1]) {
                return 0;
            } else {
                return true;
            }
        }
    }

    int* fibonacci(int n) {
        int result[] = {1, 2, 3};
        cout << "Fibonacci";
        return result;
    }

    // Sort an Array (Descending Order)
    int* sortedArray(int* arr, int len) {
        
        cout << "Sorted ARray";
        return arr;
    }
};

int main() {

    PiroGrams p;

    cout << p.PalindromeChecker("madam") << endl;
    cout << p.fibonacci(5);
    int a[] = {1, 2, 3, 4, 5};
    cout << p.sortedArray(a, 5);

    return 0;
}