// 5. **Animal Classification with Traits:**
//    Design a class hierarchy to categorize animals into different types (Mammals, Birds, Fish) and specify traits (Carnivore, Herbivore, Omnivore). Implement multiple inheritance to create a structure where each animal type inherits from both the Animal class and the Trait class. Handle any complications arising from inheriting conflicting methods or attributes related to animal behavior and traits.

#include <iostream>
using namespace std;

class Animal {
public:
    Animal() { }
    Animal(const string& name) { }

    void sleep() {
        cout << "Animal " << name << " is sleeping." << endl;
    }

    void eat() {
        cout << "Animal " << name << " is eating." << endl;
    }

protected:
    string name;
};

class Mammal : public Animal {
public:
    Mammal(const string& name) : Animal(name) { }

    void feedMilk() {
        cout << "Mammal " << name << " is feeding milk." << endl;
    }
};

class Bird : public Animal {
public:
    Bird(const string& name) : Animal(name) { }

    void layEggs() {
        cout << "Bird " << name << " is laying eggs." << endl;
    }
};

class Fish : public Animal {
public:
    Fish(const string& name) : Animal(name) { }

    void swim() {
        cout << "Fish " << name << " is swimming." << endl;
    }
};

class Carnivore : public Animal, public Mammal {
public:
    Carnivore(const string& name) : Mammal(name) { }

    void eatMeat() {
        cout << "Carnivore " << Mammal::name << " is eating meat." << endl;
    }
};

class Herbivore : public Animal, public Mammal {
public:
    Herbivore(const string& name) : Mammal(name) { }

    void eatGrass() {
        cout << "Herbivore " << Mammal::name << " is eating grass." << endl;
    }
};

class Omnivore : public Animal, public Mammal {
public:
    Omnivore(const string& name) : Mammal(name) { }

    void eatMeat() {
        cout << "Omnivore " << Mammal::name << " is eating meat." << endl;
    }

    void eatGrass() {
        cout << "Omnivore " << Mammal::name << " is eating grass." << endl;
    }
};

int main() {
    Carnivore lion("Lion");
    lion.eatMeat();
    lion.feedMilk();
    lion.Mammal::sleep();

    Herbivore deer("Deer");
    deer.eatGrass();
    deer.feedMilk();
    deer.Mammal::sleep();

    Omnivore bear("Bear");
    bear.eatMeat();
    bear.eatGrass();
    bear.feedMilk();
    bear.Mammal::sleep();

    return 0;
}