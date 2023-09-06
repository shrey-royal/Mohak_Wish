// Demonstrate the concept of polymorphism by creating an array of pointers to the `Vehicle` class and populating it with instances of `Car`, `Motorcycle`, and `Bicycle`. Iterate through the array and call the `startEngine` and `stopEngine` methods for each vehicle.

#include<iostream>
#include<string>
using namespace std;

class Vehicle {
    public:
        virtual void startEngine() = 0;
        virtual void stopEngine() = 0;
};

class Car : public Vehicle {
    public:
        void startEngine() {
            cout << "Car engine started" << endl;
        }
        void stopEngine() {
            cout << "Car engine stopped" << endl;
        }
};

class Motorcycle : public Vehicle {
    public:
        void startEngine() {
            cout << "Motorcycle engine started" << endl;
        }
        void stopEngine() {
            cout << "Motorcycle engine stopped" << endl;
        }
};

class Bicycle : public Vehicle {
    public:
        void startEngine() {
            cout << "Bicycle don't have engine" << endl;
        }
        void stopEngine() {
            cout << "Bicycle don't have engine" << endl;
        }
};

int main() {
    // Parent obj = new Child();   //upcasting

    Vehicle *v[3];  // array of pointers to Vehicle class
    v[0] = new Car();   //upcasting
    v[1] = new Motorcycle();    //upcasting
    v[2] = new Bicycle();   //upcasting


    for(int i = 0; i < 3; i++) {
        v[i]->startEngine();
        v[i]->stopEngine();
    }
    
    return 0;
}