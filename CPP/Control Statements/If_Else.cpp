#include "../one.h"

/*
Enum: Enumeration
> Enumerations are user-defined data types that consist of integral constants.
> The keyword 'enum' is used to define enumerations.
> The general form of an enumeration is:
    enum enum-name { list of names } var-list;

> Here, enum-name is the enumeration's name. The list of names is comma-separated.
> Each of the names represents a constant whose value is 1 more than the previous constant.
> By default, the value of the first name is 0.
> The value of the second name is 1 more than the value of the first name.

> The following example shows how to define an enumeration:
    enum color { red, green, blue } c;

> Here, the enumeration's name is color. The names red, green, and blue are the enumeration's enumerators.

> The following example shows how to use an enumeration:
    #include <iostream>
    using namespace std;

    enum color { red, green, blue } c;

    int main() {
        c = blue;   // c = 2
        cout << c << endl;  // 2
        return 0;
    }



*/

int main() {
    enum cars { HONDA_CIVIC, TOYOTA_COROLLA, SUZUKI_SWIFT, MARUTI_ALTO_800, SUZUKI_WAGONR, SUZUKI_EECO } car;

    // car = SUZUKI_EECO;  // we can assign any value from the enum to the variable
    // cout << car << endl;    // 5


    //print enum
    for (int i = HONDA_CIVIC; i <= SUZUKI_EECO; i++) {
        cout << i << endl;
    }

    //we are scanning a variable that will be used to choose a car from the enum
    cout << "Enter a number to choose a car: ";
    int a;
    cin >> a;
    car = (cars)a;  //typecasting

    if (car == HONDA_CIVIC) {
        cout << "You chose Honda Civic\n";
    } else if (car == TOYOTA_COROLLA) {
        cout << "You chose Toyota Corolla\n";
    } else if (car == SUZUKI_SWIFT) {
        cout << "You chose Suzuki Swift\n";
    } else if (car == MARUTI_ALTO_800) {
        cout << "You chose Maruti Alto 800\n";
    } else if (car == SUZUKI_WAGONR) {
        cout << "You chose Suzuki WagonR\n";
    } else if (car == SUZUKI_EECO) {
        cout << "You chose Suzuki Eeco\n";
    } else {
        cout << "Invalid choice\n";
    }

    return 0;
}