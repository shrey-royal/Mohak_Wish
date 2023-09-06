#include<iostream>
#include<string>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14159 * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    Shape* shapes[] = {&circle, &rectangle};
    // Shape* shapes[2];

    // shapes[0] = &circle;
    // shapes[1] = &rectangle;

    // shapes[0] = new Circle(5.0);
    // shapes[1] = new Rectangle(4.0, 6.0);

    for(int i = 0; i < 2; i++) {
        cout << "Area: " << shapes[i]->area() << endl;
        cout << "Perimeter: " << shapes[i]->perimeter() << endl;
    }
}


/*
in cpp we do not have Interfaces but we can create an abstract class with pure virtual functions and then inherit it to create an interface.

*/