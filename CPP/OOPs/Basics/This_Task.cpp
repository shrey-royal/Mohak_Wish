#include<iostream>
using namespace std;

class Hospital {
    char patients[5][20];

    public:
        char *getPatient(int i) {
            return patients[i];
        }
};


int main() {

}