class Food {
    private String name;
    private double paiso;

    public Food(String name, double paiso) {
        this.name = name;
        this.paiso = paiso;
    }

    public String getName() {
        return name;
    }

    public void setPaiso(double paiso) {
        this.paiso = paiso;
    }

    protected void display() {
        System.out.println("Name: " + name);
        System.out.println("Paiso: Rs." + paiso);
    }
}

class Lasagna extends Food {
    private String sauce;

    public Lasagna(String name, double paiso, String sauce) {
        super(name, paiso);
        this.sauce = sauce;
    }

    public void displayLasagnaDetails() {
        display();
        System.out.println("Sauce: " + sauce);
    }
}

public class AccessModifiers {
    public static void main(String[] args) {
        Food burger = new Food("Cheeseburger", 249);
        Lasagna lasagna = new Lasagna("Zucchini Lasagna", 799, "Bechamel Sauce");

        System.out.println("Food Name: " + burger.getName());
        burger.setPaiso(149);

        burger.display();
        lasagna.displayLasagnaDetails();
    }
}
