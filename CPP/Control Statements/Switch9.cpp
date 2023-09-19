#include<iostream>
using namespace std;

int main() {
    int number;
    int max = INT8_MIN;
    int min = INT8_MAX;

    cout << "Enter a series of integers, terminated by a zero: " << endl;

    while(true) {
        cin >> number;

        switch(number) {
            case 0:
                if(max == INT8_MIN && min == INT8_MAX) {
                    cout << "No valid integers were entered." << endl;
                } else {
                    cout << "Largest number: " << max << endl;
                    cout << "Smallest number: " << min << endl;
                }
                return 0;

            default:
                if(number > max) {
                    max = number;
                }

                if(number < min) {
                    min = number;
                }
                break;
        }
    }
}