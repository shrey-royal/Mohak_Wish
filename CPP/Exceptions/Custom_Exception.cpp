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