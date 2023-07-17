#include "File1.cpp"

int main() {
    int x = fun();
    if (x == 1) {
        cout << "Error in fun()";
    } else {
        cout << "No error in fun()";
    }
    return 0;
}