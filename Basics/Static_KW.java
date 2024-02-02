class Student {
    static int count;   //static var/methods gets allocated with the memory only once
    String name;

    static {    //static block
        count=0;
        System.out.println("Static Block");
    }

    Student(String name) {
        System.out.println("Constructor");
        this.name = name;
        count++;
    }

    void display() {
        System.out.println("Name: " + name);
    }

    static void method() {
        System.out.println("Static method");
    }
}

public class Static_KW {
    public static void main(String[] args) {
        Student s1 = new Student("s1");
        Student s2 = new Student("s2");
        Student s3 = new Student("s3");
        Student s4 = new Student("s4");
        Student s5 = new Student("s5");

        System.out.println(Student.count);

        s1.display();
        s2.display();
        s3.display();
        s4.display();
        s5.display();

        Student.method();
    }
}
