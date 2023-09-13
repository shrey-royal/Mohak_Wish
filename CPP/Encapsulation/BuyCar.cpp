#include "Car.cpp"

int main() {
    Car c;

    c.setName("BMW");
    c.setColor("Black");
    c.setPrice(100000);

    cout << "Name: " << c.getName() << endl;
    cout << "Color: " << c.getColor() << endl;
    cout << "Price: " << c.getPrice() << endl;

    cout << "Monthly Payment: " << LoanCalculator::calculateLoan(100000, 5000, 10, 12) << endl;

    return 0;
}