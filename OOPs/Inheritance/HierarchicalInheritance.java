class Parent {
    void parentMethod() {
        System.out.println("I have 2 childs...");
    }
}

class Child1 extends Parent {
    void child1Method() {
        System.out.println("I am the child 1 of Parent");
    }
}

class Child2 extends Parent {
    void child2Method() {
        System.out.println("I am the child 2 of Parent");
    }
}

public class HierarchicalInheritance {
    public static void main(String[] args) {
        // Parent p = new Parent();
        // p.parentMethod();
        Child1 c1 = new Child1();
        c1.parentMethod();
        c1.child1Method();
        Child2 c2 = new Child2();
        c2.parentMethod();
        c2.child2Method();
    }
}