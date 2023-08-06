#include<stdio.h>

int main() {

    int num, rem, bin_num=0, base = 1;

    printf("\nEnter a number: ");
    scanf("%d", &num);  //12

    while (num != 0) {          // 1
        rem = num % 2;          // 1
        num = num / 2;          // 0
        bin_num += rem * base;  // 1100
        base *= 10;             // 10000
    }
    printf("\nBinary number: %d", bin_num);


    return 0;
}