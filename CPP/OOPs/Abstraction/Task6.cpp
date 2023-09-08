// Problem 6: Vehicle Inventory
// Implement a program that manages an inventory of vehicles. Create a class `Inventory` that can add, remove, and display vehicle information. Use the abstract class `Vehicle` as the base class for the vehicles stored in the inventory.

#include<iostream>
using namespace std;

class Vehicle {
public:
    Vehicle(string make, string model, int year) {
        this->make_ = make;
        this->model_ = model;
        this->year_ = year;
    }

    virtual void displayInfo() = 0; // pure virtual function means this class is abstract

protected:
    string make_;
    string model_;
    int year_;
};

class Car : public Vehicle {
public:
    Car(string make, string model, int year, int doors) : Vehicle(make, model, year) {
        this->doors_ = doors;
    }

    void displayInfo() {
        cout << year_ << " " << make_ << " " << model_ << " with " << doors_ << " doors" << endl;
    }

private:
    int doors_;
};

class Truck : public Vehicle {
public:
    Truck(string make, string model, int year, int payloadcapacity) : Vehicle(make, model, year) {
        this->payloadcapacity_ = payloadcapacity;
    }

    void displayInfo() {
        cout << year_ << " " << make_ << " " << model_ << " with " << payloadcapacity_ << " ton capacity" << endl;
    }

private:
    int payloadcapacity_;
};

class Inventory {
public:
    Inventory() : size_(0), capacity_(10) {
        vehicles_ = new Vehicle*[capacity_];
    }

    ~Inventory() {
        for (int i=0; i<size_; i++) {
            delete vehicles_[i];    // delete each vehicle
        }
        delete[] vehicles_; // delete the array
    }

    void addVehicle(Vehicle* vehicle) {
        if(size_ < capacity_) {
            vehicles_[size_] = vehicle;
            size_++;
        } else {
            cout << "Inventory is full. Cannot add more Vehicles." << endl;
        }
    }

    void removeVehicle(Vehicle* vehicle) {
        for(int i=0; i<size_; i++) {
            if(vehicles_[i] == vehicle) {
                delete vehicle;
                for(int j=i; j < size_; j++) {
                    vehicles_[j] = vehicles_[j+1];
                }
                size_--;
                return;
            }
        }
        cout << "Vehicle not found in inventory." << endl;
    }

    void displayInventory() {
        cout << "Current Inventory:" << endl;
        for(int i=0; i<size_; i++) {
            vehicles_[i]->displayInfo();
        }
    }

private:
    Vehicle** vehicles_;
    int size_;
    int capacity_;
};

int main() {
    Car car1("Honda", "Civic", 2010, 4);
    Truck truck1("Ford", "F-150", 2018, 1);
    Car car2("Toyota", "Camry", 2015, 4);

    Inventory inventory;
    inventory.addVehicle(&car1);
    inventory.addVehicle(&truck1);
    inventory.addVehicle(&car2);

    inventory.displayInventory();
    inventory.removeVehicle(&car1);
    inventory.displayInventory();
}