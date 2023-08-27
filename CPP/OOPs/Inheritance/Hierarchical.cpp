#include<iostream>
using namespace std;

class Architects {
    public:
        Architects() {
            cout << "Architects" << endl;
        }

        void Imagine() {
            cout << "Imagine the design..." << endl;
        }
};

class CivilEngineers : public Architects {
    public:
        CivilEngineers() {
            cout << "CivilEngineers" << endl;
        }

        void Build() {
            cout << "Build the design..." << endl;
        }
};

class InteriorDesigners : public Architects {
    public:
        InteriorDesigners() {
            cout << "InteriorDesigners" << endl;
        }

        void Decorate() {
            cout << "Decorate the design..." << endl;
        }
};

int main() {
    CivilEngineers evil;
    InteriorDesigners id;
    
    evil.Imagine();
    id.Imagine();

    evil.Build();
    id.Decorate();


    return 0;
}