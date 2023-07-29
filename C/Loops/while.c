#include<stdio.h>

int main() {
    int i=0;    // initialization
    while(i<5) {    // condition
        printf("\n%d", i);    // code
        i++;    // increment
    }
    printf("\n\n\n\n");
    i = 5;
    while(i>0) {    // condition
        printf("\n%d", i);    // code
        i--;    // decrement
    }
    return 0;
}
/*

Syntax:

    //initialization
    while(condition) {
        // code

        // increment or decrement
    }

Task-1: Scan a number from the user and print the table of that number using while loop.

Output: 
Enter any number: 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
.
.
.
5 x 10 = 50

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

Task-3: using the same problem statement given above, here you have to print the table in reverse order and also if user enters 
1 -> 10
2 -> 9
3 -> 8
4 -> 7
5 -> 6

Task-4: Scan a number from the user and reverse it using while loop.
*/