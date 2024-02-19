class Address {
    private String city, state, country;
    
    public Address() {}

    public Address(String city, String state, String country) {
        this.city = city;
        this.state = state;
        this.country = country;
    }

    public void display() {
        System.out.println("City: " + this.city + "\nState: " + this.state + "\nCountry: " + this.country);
    }
}

class Employee {
    private int id;
    private String name;
    private float salary;
    private Address address;    //object

    public Employee() {}

    //                                                 Aggregation happens here
    public Employee(int id, String name, float salary, Address address) {
        this.id = id;
        this.name = name;
        this.salary = salary;
        this.address = address;
    }

    void display() {
        System.out.println("Id: " + this.id + "\nName: " + this.name + "\nSalary: " + this.salary);
        address.display();
    }
}

public class Aggregation {
    public static void main(String[] args) {
        // Address add = new Address("Gandhinagar", "Gujarat", "India");
        // Employee e = new Employee(23, "Vishwa", 0.02f, add);
        Employee e = new Employee(23, "Vishwa", 0.02f, new Address("Gandhinagar", "Gujarat", "India"));

        e.display();
    }
}

/*
When you pass another class' object as a parameter into the current class then it is called aggregation.

Employee - Address
*/