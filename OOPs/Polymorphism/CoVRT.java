class Vehicle {
    Vehicle startEngine() {
        System.out.println("Starting the engine of a generic vehicle.");
        return this;
    }
}

class Car extends Vehicle {
    @Override
    Car startEngine() {
        System.out.println("Starting the engine of a car.");
        return this;
    }
}

class Shape {
    Shape createShape() {
        System.out.println("Creating generic shape");
        return this;
    }
}

class Circle extends Shape {
    @Override
    Circle createShape() {
        System.out.println("Creating circle shape");
        return this;
    }
}

class Rectangle extends Shape {
    @Override
    Rectangle createShape() {
        System.out.println("Creating rectangle shape");
        return this;
    }
}


public class CoVRT {
    public static void main(String[] args) {
        // Vehicle v = new Vehicle();
        // v.startEngine();

        // Car c = new Car();
        // c.startEngine();

        // Vehicle v = new Car();
        // v.startEngine();

        Shape s;

        s = new Shape();
        s.createShape();

        s = new Circle();
        s.createShape();

        s = new Rectangle();
        s.createShape();

    }
}

/*
Tasks:

Scenario 1: Animal Sounds
In an animal sounds application, create a base class called "Animal" with a method called "makeSound" that returns an instance of the "Sound" class. Implement derived classes like "Dog" and "Cat" that override the "makeSound" method and return their specific sound objects.

Scenario 2: Shape Factory
In a shape factory application, define an abstract base class called "Shape" with a method called "createShape" that returns an instance of the "Shape" class. Implement derived classes like "Circle" and "Rectangle" that override the "createShape" method and return their specific shape objects.

Scenario 3: E-commerce Product Search
In an e-commerce product search application, create a base class called "Product" with a method called "search" that returns an instance of the "Product" class. Implement derived classes like "ElectronicsProduct" and "ClothingProduct" that override the "search" method and return their specific product objects.

Scenario 4: Stock Market Analysis
In a stock market analysis system, define a base class called "Stock" with a method called "getStockData" that returns an instance of the "Stock" class. Implement derived classes like "TechStock" and "PharmaStock" that override the "getStockData" method and return their specific stock data objects.

*/