class Volkswagen {
    protected String model, company;
    protected double price;
}

class Audi extends Volkswagen {
    Audi() {
        super.model = "RS8 Sports";
        super.company = this.getClass().getName();
        super.price = 200_000;
    }

    void display() {
        System.out.println("Model: " + super.model);
        System.out.println("Company: " + super.company);
        System.out.println("Price: " + super.price);
    }
}

class ROCars extends Audi {
    void display() {
        System.out.println("Model: " + super.model);
        System.out.println("Company: " + super.company);
        System.out.println("Price: " + super.price);
    }
}

public class Multilevel {
    public static void main(String[] args) {
        ROCars care = new ROCars();
        care.display();

        // Audi a = new Audi();
        // a.display();
    }
}
