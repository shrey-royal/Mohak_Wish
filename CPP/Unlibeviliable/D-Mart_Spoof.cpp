#include<iostream>
#include<string.h>
using namespace std;

class Item {
public:
    char name[50];
    double price;
    double discount;

    Item() {}

    Item(char n[], double p, double d) {
        strcpy(name, n);
        price = p;
        discount = d;
    }
};

class Category {
public:
    char name[50];
    Item items[50];
    int itemCount;

    Category(char n[]) {
        strcpy(name, n);
        itemCount = 0;
    }

    void addItem(char n[], double p, double d) {
        if(itemCount < sizeof(items) / sizeof(items[0])) {
            Item i(n, p, d);
            items[itemCount++] = i;
        } else {
            cout << "Category is full, Cannot add more items." << name << endl;
        }
    }

    void displayItems() {
        cout << "Items in Category " << name << endl;
        cout << "Name\tPrice\tDiscount" << endl;
        for(int i=0; i<itemCount; i++) {
            cout << items[i].name << "\t" << items[i].price << "\t" << items[i].discount << endl;
        }
    }
};

class Cart {
public:
    Item items[50];
    int itemCount;

    Cart() {
        itemCount = 0;
    }

    void addItem(Item& i) {
        if(itemCount < sizeof(items) / sizeof(items[0])) {
            items[itemCount++] = i;
        } else {
            cout << "Cart is full, Cannot add more Items." << endl;
        }
    }

    void displayItems() {
        cout << "Items in Cart" << endl;
        cout << "Name\tPrice\tDiscount" << endl;
        for(int i=0; i<itemCount; i++) {
            cout << items[i].name << "\t" << items[i].price << "\t" << items[i].discount << endl;
        }
    }

    void removeItem(char n[]) {
        for(int i=0; i<itemCount; i++) {
            if(strcmp(items[i].name, n) == 0) {
                for(int j=i; j<itemCount-1; j++) {
                    items[j] = items[j+1];
                }
                itemCount--;
                break;
            }
        }
    }

    double calculateTotalDiscount() {
        double totalDiscount = 0;
        for(int i=0; i<itemCount; i++) {
            totalDiscount += items[i].discount;
        }
        return totalDiscount;
    }

    void calculateTotalPrice() {
        double totalPrice = 0;
        double discount = calculateTotalDiscount();
        for(int i=0; i<itemCount; i++) {
            totalPrice += items[i].price;
        }
        cout << "Total Price: " << totalPrice << endl;
        cout << "Applied Discount: " << discount << endl;
        totalPrice -= discount;
        cout << "Final Price: " << totalPrice << endl;
    }
};

class User {
public:
    char name[50];
    Cart cart;

    User(char n[]) {
        strncpy(name, n, sizeof(name));
    }

    void addToCart(Item& i) {
        cart.addItem(i);
    }

    void viewCart() {
        cart.displayItems();
    }

    void removeFromCart(char n[]) {
        cart.removeItem(n);
    }

    void viewUserDetails() {
        cout << "User Name: " << name << endl;
        cout << "Cart Details: " << endl;
        cart.displayItems();
        cart.calculateTotalPrice();
    }
};

int main() {
    // Create predefined categories and items at DMart
    Category electronics("Electronics");
    electronics.addItem("Laptop", 800.0, 50.0);
    electronics.addItem("Smartphone", 500.0, 25.0);

    Category groceries("Groceries");
    groceries.addItem("Milk", 2.0, 0.5);
    groceries.addItem("Bread", 1.0, 0.2);

    system("cls");
    // Create a user
    cout << "Welcome to DMart!\n\n" << endl;
    cout << "Enter your name: ";
    char name[50];
    cin.getline(name, sizeof(name));
    User user(name);

    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Categories" << endl;
        cout << "2. Cart" << endl;
        cout << "3. User Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // Consume the newline character

        switch (choice) {
            case 1:
                int categoryChoice;
                cout << "\nCategories:" << endl;
                cout << "1. Electronics" << endl;
                cout << "2. Groceries" << endl;
                cout << "Enter your category choice: ";
                cin >> categoryChoice;

                if (categoryChoice == 1) {
                    electronics.displayItems();
                    int itemChoice;
                    cout << "Enter the item number you want to add to the cart: ";
                    cin >> itemChoice;
                    if (itemChoice >= 1 && itemChoice <= electronics.itemCount) {
                        user.addToCart(electronics.items[itemChoice - 1]);
                        cout << "Item added to the cart." << endl;
                    } else {
                        cout << "Invalid item choice." << endl;
                    }
                } else if (categoryChoice == 2) {
                    groceries.displayItems();
                    int itemChoice;
                    cout << "Enter the item number you want to add to the cart: ";
                    cin >> itemChoice;
                    if (itemChoice >= 1 && itemChoice <= groceries.itemCount) {
                        user.addToCart(groceries.items[itemChoice - 1]);
                        cout << "Item added to the cart." << endl;
                    } else {
                        cout << "Invalid item choice." << endl;
                    }
                } else {
                    cout << "Invalid category choice." << endl;
                }
                break;
            case 2:
                cout << "\nUser's Cart:" << endl;
                user.viewCart();
                break;
            case 3:
                cout << "\nUser Details:" << endl;
                user.viewUserDetails();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}