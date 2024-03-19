

class Sport {
    private String name;
    private String typeOfSport; //indoor/outdoor
    private boolean isTeamSport;
    
    //how to access private data outside of this class?

    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getTypeOfSport() {
        return typeOfSport;
    }
    public void setTypeOfSport(String typeOfSport) {
        this.typeOfSport = typeOfSport;
    }
    public boolean isTeamSport() {
        return isTeamSport;
    }
    public void setTeamSport(boolean isTeamSport) {
        this.isTeamSport = isTeamSport;
    }

}

public class Getter_Setter {
    public static void main(String[] args) {
        Sport s = new Sport();
        
        s.setName("Football");
        s.setTypeOfSport("Outdoor");
        s.setTeamSport(true);

        //printing the object
        System.out.println("Name: " + s.getName()); 
        System.out.println("What type of sport it is: " + s.getTypeOfSport()); 
        System.out.println("Is it a team sport? -> " + s.isTeamSport());

    }
}

/*
Accessor - getter method
Mutator - setter method

getter & setter methods: it will restrict the user from accessing or manipulating the data inside the class from outside the class.

-> either we can get the value from the data memeber/ class variable
-> or we can modify the vallue of the data member.

*/