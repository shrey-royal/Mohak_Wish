/*
10. Write a program in C to print all perfect numbers in a given range using the function.
Test Data :
Input lowest search limit of perfect numbers : 1
Input lowest search limit of perfect numbers : 100
Expected Output :

 The perfect numbers between 1 to 100 are :                                      6   28 

*/

#include<stdio.h>

//Function to check if the number is perfect or not
int isPerfect(int num) {
    int sum = 1;    //1 is always a divisor

    for(int i=2; i*i <= num; i++) {
        if(num % i == 0) {
            //the reason behind this is that if we have a number 36 then it's divisor are 1, 2, 3, 4, 6, 9, 12, 18, 36 now if we divide 36 by 2 then we get 18 and if we divide 36 by 18 then we get 2 so we are adding both 2 and 18 into sum variable
            if(i*i != num) {
                sum += (i + num / i);//here sum will be 1 + 2 + 18 + 3 + 12 + 4 + 9 + 6 = 55
            } else {
                sum += i;//here sum will be 1 + 2 + 18 + 3 + 12 + 4 + 9 + 6 + 6 = 61
            }
        }
    }


    // for(int i=2; i<num; i++) {
    //     if(num % i == 0) {
    //         sum += i;
    //     }
    // }

    return (sum == num);
}

//Function to print perfect number in a given range
void printPerfectNumber(int lower, int upper) {
    printf("\nThe Perfect numbers between %d and %d are: ", lower, upper);

    for(int i=lower; i<=upper; i++) {
        if(isPerfect(i)) {
            printf("%d, ", i);
        }
    }
    printf("\b\b \n");
}

int main() {
    int lower, upper;

    printf("Input lowest search limit of perfect numbers: ");
    scanf("%d", &lower);

    printf("Input highest search limit of perfect numbers: ");
    scanf("%d", &upper);

    printPerfectNumber(lower, upper);

    return 0;
}