class Student {
    private String name;
    private float marks;
    private double fees;
    private int grade;

    {   //IIB
        name = null;
        marks = 0.0f;
        fees = 0.0;
        grade = 0;
        System.out.println("IIB called!");
    }

    Student() {System.out.println("Default constructor called!");}

    Student(String name, float marks, double fees, int grade) {
        this.name = name;
        this.marks = marks;
        this.fees = fees;
        this.grade = grade;
        System.out.println("Parameterized called!");
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Marks: " + marks);
        System.out.println("Fees: " + fees);
        System.out.println("Grade: " + grade);
    }
}

public class IIB {
    public static void main(String[] args) {
        Student s = new Student();
        s.display();
        s = new Student("Mohak", 23, 230000, 1);
        s.display();
    }
}

/*
Instance Initializer Block (IIB): used to initialize data members.
it runs each time when object of class is created.

Tasks:

Scenario 1: Employee Database
In an employee database system, create a class called "Employee" with an instance initializer block that initializes a static database connection. The block runs whenever an object of the "Employee" class is created.

Scenario 2: Game Initialization
In a game development scenario, have a class called "Game" with an instance initializer block that sets up the game environment, loads resources, and performs initialization tasks when a new game object is created.

Scenario 3: Online Game Initialization
In an online game development scenario, have a class called "Game" with an instance initializer block that sets up the game environment, loads resources, and performs initialization tasks when a new game object is created.

Scenario 4: Company Employee Management
In a company employee management system, create a class called "Employee" with an instance initializer block that initializes an employee's access privileges and permissions when a new employee object is created.

*/