#include<iostream>
using namespace std;

char *getChar() {
    return "Hello Harry Styles";
}

int main() {
    int a = 5;
    int *ptr = &a;  // &a is the address of a

    // *ptr is the value at the address stored in ptr

    cout << "The value of a is " << *(ptr) << endl;
    cout << "The address of a is " << ptr << endl;

    //address will be printed in hexadecimal format if we want to print the address in decimal format we have to use typecasting

    char name[] = "Harry Styles";
    char *ptr1 = (char *)name;

    while(*ptr1 != '\0') {
        cout << *ptr1;
        ptr1++;
    }

    cout << endl;

    cout << getChar();

    return 0;
}