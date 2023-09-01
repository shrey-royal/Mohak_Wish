#include<iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {   //hidden from compiler
        cout << "Drawing Shape" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Rectangle r;
    Circle c;

    r.draw();
    c.draw();

    // Shape *s;

    // s = &r;
    // s->draw();


    return 0;
}