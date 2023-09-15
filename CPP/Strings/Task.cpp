// 5. Substring Finder:
//    Write a C++ program that takes a substring and a string as input and checks if the substring is present in the given string. If it is found, display its starting index; otherwise, print a message indicating it was not found.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputStr, subStr;

    cout << "Enter the main String: ";
    getline(cin, inputStr);

    cout << "Enter the substring: ";
    getline(cin, subStr);

    int found = inputStr.find(subStr);

    if(found != string::npos) {
        cout << "Substring found at index " << found << endl;
    } else {
        cout << "Substring not found!" << endl;
    }

    return 0;
}