#include<iostream>
#include<string>
using namespace std;

class Human {
    public:
        void introduce() {
            cout << "I am Human" << endl;
        }
        void introduce(string name) {
            cout << "I am " << name << endl;
        }
};

int main() {
    Human humanInterface;

    humanInterface.introduce();
    humanInterface.introduce("Mohak");

    return 0;
}

/*
Function overloading is a feature in C++ where two or more functions can have the same name but different parameters.

for example:
    void func();
    void func(int a);
    void func(int a, int b);
    void func(double a, double b);
    void func(double a, int b);
    void func(int a, double b);
*/

/*
Task:

Problem Statement: Online Food Ordering System

You are tasked with designing a simplified online food ordering system for a startup restaurant. The restaurant offers a variety of menu items for customers to order. Your goal is to implement a program that allows customers to place orders and then displays the ordered items along with the total amount to be paid.

Requirements:

1. Create a 'MenuItem' class with the following properties and methods:
   - Properties: 'name' (string), 'price' (float)
   - Methods: 'getName()' and 'getPrice()' to retrieve the name and price of the menu item.

2. Create an 'Order' class with the following properties and methods:
   - Properties: 'orderedItems' (string), 'totalAmount' (float)
   - Methods:
     - 'placeOrder(const MenuItem& item)': Adds the ordered menu item to the order. Increments the 'totalAmount' by the menu item's price and appends the item's name to 'orderedItems'.
     - 'placeOrder(const MenuItem& item1, const MenuItem& item2)': Adds two ordered menu items to the order. Increments the 'totalAmount' by the sum of their prices and appends their names to 'orderedItems'.
     - 'displayOrder()': Displays the ordered items and the total amount to be paid.

Instructions:

1. Implement the 'MenuItem' and 'Order' classes according to the given requirements.

2. In the 'main' function:
   - Create at least three different menu items using the 'MenuItem' class.
   - Create an 'Order' object.
   - Place orders using both 'placeOrder' function overloads.
   - Display the ordered items and the total amount using the 'displayOrder' method.

3. Compile and run your program to ensure it produces the correct output.

Example:

Suppose you have the following menu items:
- Pizza: $10.99
- Burger: $5.99
- Pasta: $8.49

Your program's output might look like this:

Ordered items: Pizza, Burger, Pasta, 
Total amount: $25.47


Note: This problem statement is designed to be simplified for demonstration purposes. In a real-world scenario, the system would need more extensive error handling, a larger variety of menu items, user input, and possibly a more complex data structure to manage orders and items.



*/