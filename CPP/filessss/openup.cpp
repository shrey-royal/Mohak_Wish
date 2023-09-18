#include<iostream>
#include<fstream>
using namespace std;

int main() {

    // ofstream file("openup.txt");

    // if(file.is_open()) {
    //     file << "Welcome to the world of kalyug..." << endl;
    //     file << "where everyone is greedy..." << endl;
    //     file << "they are selfish like wish..." << endl;

    //     file.close();
    // } else cout << "Error opening the file..." << endl;

    // file.clear();

    string str;
    ifstream file("openup.txt");

    if(file.is_open()) {
        while(getline(file, str)) {
            cout << str << endl;
        }
        file.close();
    } else cout << "Error opening the file..." << endl;

    return 0;
}