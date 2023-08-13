#include<iostream>
using namespace std;

class SonaChandiNoAluminiumNuGhar {    //Parent Class
    public:
        SonaChandiNoAluminiumNuGhar() {
            cout << "SonaChandiNoAluminiumNuGhar ane Ghar maa Tons of Money..." << endl;
        }

        void SonaChandi() {
            cout << "SonaChandi" << endl;
        }

        void MonghiSpices() {
            cout << "MonghiSpices" << endl;
        }

        void MonghuFurniture() {
            cout << "MonghuFurniture" << endl;
        }

        void FerreroRocher() {
            cout << "FerreroRocher" << endl;
        }
};

class AluminiumNoDabbo : public SonaChandiNoAluminiumNuGhar {  //Child Class
    public:
        AluminiumNoDabbo() {
            cout << "AluminiumNoDabbo ane Dabbo maa Tons of Problem..." << endl;
        }

        void Aluminium() {
            cout << "Aluminium" << endl;
        }

        void SugarStock() {
            cout << "SugarStock" << endl;
        }

        void SpicesStock() {
            cout << "SpicesStock" << endl;
        }

        void kismis() { //kismis = raisins = (draaaks)
            cout << "kismis" << endl;
        }
};

int main() {
    AluminiumNoDabbo dabbo;
    dabbo.Aluminium();
    dabbo.SugarStock();
    dabbo.SpicesStock();
    dabbo.kismis();
    dabbo.SonaChandi();
    dabbo.MonghiSpices();
    dabbo.MonghuFurniture();
    dabbo.FerreroRocher();
    return 0;
}