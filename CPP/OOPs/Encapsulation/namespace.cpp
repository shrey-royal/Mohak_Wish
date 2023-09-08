// class is a prime example of encapsulation in cpp
// Access Specifiers: public, private, protected, default

/*
Encapsulation is a process of wrapping up of data and information under a single unit.
*/

#include "functions.cpp"

namespace First {
    void sayHello() {
        cout << "Hello from First namespace" << endl;
    }

    class A {
        int a;
        char c;
    public:
        void ScanData() {
            cout << "Enter a number: ";
            cin >> a;
            cout << "Enter a character: ";
            cin >> c;
        }

        void PrintData() {
            cout << "Number: " << a << endl;
            cout << "Character: " << c << endl;
        }
    };
}

namespace Second {
    void sayHello() {
        cout << "Hello from Second namespace" << endl;
    }

    class A {
        float a;
        double c;
    public:
        void Scan() {
            cout << "Enter a float: ";
            cin >> a;
            cout << "Enter a double: ";
            cin >> c;
        }

        void Print() {
            cout << "Float: " << a << endl;
            cout << "Double: " << c << endl;
        }
    };
}

int main() {
    /*
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    add(a, b);
    sub(a, b);
    mul(a, b);
    quotient(a, b);
    remainder(a, b);
    power(a, b);
    */

    // First::sayHello();
    // Second::sayHello();

    // using namespace First;
    // sayHello();

    First::A obj;
    obj.ScanData();
    obj.PrintData();

    // using namespace Second;
    // sayHello();

    Second::A obj2;
    obj2.Scan();
    obj2.Print();

    return 0;
}