/*
Task-2: Scan a number from the user and print the table of that number.
Twist: User can only enter number between 1 to 5. If user enters any other number, then print "Invalid Input" and ask user to enter again.

Twist 2: If user enters 1 then you have to print the table of 6. If user enters 2 then you have to print the table of 7 and so on.
3 -> 8
4 -> 9
5 -> 10

Twist 3: Print the multiplication table from 10 to 1.
Output: 
9 x 10 = 90
9 x 9 = 81
.
.
.
9 x 1 = 9
*/

#include<stdio.h>


int main() {
    int num=0;

    while(num<1 || num>5) {
        if (num != 0) printf("Invalid Input\n");
        printf("Enter any number: ");
        scanf("%d", &num);
    }

    int i=10;
    // num += 5;
    num = 11 - num;
    while(i>0) {
        printf("%d x %d = %d\n", num, i, num*i);
        i--;
    }

    return 0;
}