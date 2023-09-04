/*
Create a C++ program for an e-commerce system. Define a base class 'Product' with a method 'displayInfo()' to showcase product details like name, price, and description. Implement two derived classes, 'PhysicalProduct' and 'DigitalProduct', inheriting from 'Product'.

Override the 'displayInfo()' method in each derived class:

1. In the 'PhysicalProduct' class, override 'displayInfo()' to include specifics like weight, shipping cost, and delivery time.

2. In the 'DigitalProduct' class, override 'displayInfo()' to include information about download links and file sizes.

*/

#include<iostream>
#include<string>
using namespace std;

class Product {
    string name;
    double price;
    string description;

public:
    Product(string name, double price, string description) : name(name), price(price), description(description)  { }

    virtual void displayInfo() {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Description: " << description << endl;
    }
};

class PhysicalProduct : public Product {
    double weight;
    double shippingCost;
    int deliveryTime;    //In days

public:
    PhysicalProduct(string name, double price, string description, double weight, double shippingCost, int deliveryTime) : Product(name, price, description) {
        this->weight = weight;
        this->shippingCost = shippingCost;
        this->deliveryTime = deliveryTime;
    }

    void displayInfo() override {
        Product::displayInfo();
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Shipping Cost: " << shippingCost << endl;
        cout << "Delivery Time: " << deliveryTime << " days" << endl;
    }
};

class DigitalProduct : public Product {
    string downloadLink;
    double fileSizeMB;

public:
    DigitalProduct(string name, double price, string description, string downloadLink, double fileSizeMB) : Product(name, price, description) {
        this->downloadLink = downloadLink;
        this->fileSizeMB = fileSizeMB;
    }

    void displayInfo() override {
        Product::displayInfo();
        cout << "Download Link: " << downloadLink << endl;
        cout << "File Size: " << fileSizeMB << " MB" << endl;
    };
};

int main() {
    PhysicalProduct p("Laptop", 150000, "High-Performance laptop", 2.5, 500, 5);
    DigitalProduct d("Visual Studio Code Software", 0, "Code Editor", "https://code.visualstudio.com/download", 165);

    cout << "Physical Product Details: " << endl;
    p.displayInfo();
    cout << endl;
    cout << "Digital Product Details: " << endl;
    d.displayInfo();

    return 0;
}