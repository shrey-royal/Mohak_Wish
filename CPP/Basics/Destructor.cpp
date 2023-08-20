#include<iostream>
using namespace std;

class HotelMenu {
    private:
        string name;
        string type;
        int price;

    public:
        HotelMenu(string name, string type, int price) {
            this->name = name;
            this->type = type;
            this->price = price;
        }

        void display() {
            cout << name << " " << type << " " << price << endl;
        }

        ~HotelMenu() {
            cout << "Object is destroyed" << endl;
        }
};

int main() {
    HotelMenu menu1("Pizza", "Veg", 200);
    HotelMenu menu2("Burger", "Non-Veg", 150);
    menu1.display();
    menu2.display();

    HotelMenu *menu3 = new HotelMenu("Sandwich", "Veg", 100);
    menu3->display();
    delete menu3;

    return 0;
}