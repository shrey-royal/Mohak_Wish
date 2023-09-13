#include <iostream>
#include <string>
#include "LoanCalculator.cpp"
using namespace std;

class Car : public LoanCalculator {
    string name;
    string color;
    double price;

public:
    //getter: this method is used to get the value of a private member
    string getName() {
        return name;
    }

    //setter: this method is used to set the value of a private member
    void setName(string name) {
        this->name = name;
    }

    string getColor() {
        return color;
    }

    void setColor(string color) {
        this->color = color;
    }

    double getPrice() {
        return price;
    }

    void setPrice(double price) {
        this->price = price;
    }

};