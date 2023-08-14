#include<iostream>
using namespace std;

class GrandParent {
    private:
        double PropertyArea = 10.5;    //Vigga
    public:
        void getPropertyValuationGF() {
            cout << "Property Valuation is " << PropertyArea << " Cr" << endl;
        }
};

class Parent : public GrandParent {
    private:
        double PropertyArea = 5.5;    //Vigga
    public:
        void getPropertyValuationF() {
            cout << "Property Valuation is " << PropertyArea << " Cr" << endl;
        }
};

class Child : public Parent {
    private:
        double PropertyArea = -1;    //Vigga
    public:
        void getPropertyValuationC() {
            cout << "Udhaari" << endl;
        }
};

int main() {
    Child c;
    // c.getPropertyValuation();
    // c.Parent::getPropertyValuation();
    // c.GrandParent::getPropertyValuation();

    c.getPropertyValuationC();
    c.getPropertyValuationF();
    c.getPropertyValuationGF();

    return 0;
}

/*
Access Modifiers: 

    public:     Accessible to all
    private:    Accessible to class only
    protected:  Accessible to class and its child classes

public: When we inherit a class using public access modifier, all the public members of the base class become the public members of the derived class and all the protected members of the base class become the protected members of the derived class. The private members of the base class remain inaccessible to the derived class.

private: When we inherit a class using private access modifier, all the public and protected members of the base class become the private members of the derived class. The private members of the base class remain inaccessible to the derived class.

protected: When we inherit a class using protected access modifier, all the public and protected members of the base class become the protected members of the derived class. The private members of the base class remain inaccessible to the derived class.

*/


/*
Tasks:

Problem 1: School Management System
Create a School Management System using multilevel inheritance. Create a base class "Person" with attributes like name and age. Derive two classes "Student" and "Teacher" from the "Person" class. Then, derive a class "Admin" from the "Teacher" class. Implement functions to display information and manage the roles of students, teachers, and administrators.

Problem 2: Banking System
Design a Banking System using multilevel inheritance. Create a base class "Account" with attributes like account number, balance, and account holder name. Derive two classes "SavingsAccount" and "CurrentAccount" from the "Account" class. Then, derive a class "LoanAccount" from the "SavingsAccount" class. Implement functions to deposit, withdraw, and calculate interest for different account types.

Problem 3: Vehicle Hierarchy
Model a vehicle hierarchy using multilevel inheritance. Create a base class "Vehicle" with attributes like make, model, and year. Derive two classes "Car" and "Motorcycle" from the "Vehicle" class. Then, derive a class "Sportscar" from the "Car" class. Implement functions to display vehicle details and calculate specifications for each type of vehicle.

Problem 4: Online Shopping System
Develop an Online Shopping System using multilevel inheritance. Create a base class "Product" with attributes like product ID, name, and price. Derive two classes "Electronics" and "Clothing" from the "Product" class. Then, derive a class "Shoes" from the "Clothing" class. Implement functions to add products to the cart, calculate total prices, and manage product categories.

Problem 5: Animal Kingdom
Create an Animal Kingdom simulation using multilevel inheritance. Create a base class "Animal" with attributes like species and habitat. Derive two classes "Mammal" and "Bird" from the "Animal" class. Then, derive a class "Parrot" from the "Bird" class. Implement functions to display animal information, simulate behaviors, and manage the animal hierarchy.

These problem statements involve creating a hierarchy of classes using multilevel inheritance and implementing various functions to manage and interact with the objects within the hierarchy.



*/