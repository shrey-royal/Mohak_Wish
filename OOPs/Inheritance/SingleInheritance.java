class Father {
    protected double property;

    Father() {
        this.property = 100_000;
    }
}

class Child extends Father {
    void display() {
        System.out.println("property i have: " + property);
    }
}

public class SingleInheritance {
    public static void main(String[] args) {
        Child c = new Child();
        c.display();
    }
}