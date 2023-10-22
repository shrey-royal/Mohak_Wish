#include<stdio.h>
#include<string.h>


union College {
    struct Student {
        int roll_no;
        char name[20];
        float fees;
    }ce, mca, it, ece, eee;
};

int main() {
    union College ldrp;

    ldrp.ce.roll_no = 30444;
    strcpy(ldrp.ce.name, "Wish");
    ldrp.ce.fees = 1600000;

    printf("\nRoll No of CE is %d", ldrp.ce.roll_no);
    printf("\nName of CE is %s", ldrp.ce.name);
    printf("\nFees of CE is %.2f", ldrp.ce.fees);

    return 0;
}