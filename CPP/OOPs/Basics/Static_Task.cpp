// 3. "Design a 'Bank' class to represent a bank's financials. Use a static member variable 'totalAssets' to keep track of the sum of all customer account balances, and update it automatically every time a new account is created or an existing account balance changes."

#include<iostream>
using namespace std;


class Bank {
    static float totalAssets;
    float balance;
public:
    Bank() {
        cout << "\nEnter Balance: ";
        cin >> balance;
        totalAssets += balance;
    }

    static float getTotalAssets() {
        return totalAssets;
    }
};

float Bank::totalAssets = 0;

int main() {
    Bank b1, b2, b3;
    cout << "\nTotal Assets: " << Bank::getTotalAssets() << endl;
    return 0;
}