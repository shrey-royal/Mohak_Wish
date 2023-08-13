/*
What is Function?
Function is a block of code that performs a specific task.

Why Function?
1. Reusability
2. Easy to debug
3. Easy to understand
4. Easy to maintain
5. Reduce the complexity of the program

syntax:    return_type function_name (parameter list)
    {
        // body of the function
    }


Step 1 is declaration: (signature of the function)

    > return_type function_name (parameter list);

Step 3 is definition: (body of the function)

    > return_type function_name (parameter list)
    {
        // body of the function
    }

Step 2 is calling: (calling the function)


Types of Functions:

1. Library Functions -> printf(), scanf(), getch(), getchar(), gets(), puts(), etc.
2. User-defined Functions -> Functions created by the user.

Types of User-defined Functions:

1. Function with no argument and no return value
syntax:    void function_name (void)
    {
        // body of the function
    }

2. Function with no argument and return value
syntax:
    return_type function_name (void)
    {
        // body of the function
        return value;
    }

3. Function with argument and no return value
syntax:
    void function_name (parameter list)
    {
        // body of the function
    }

4. Function with argument and return value
syntax:
    return_type function_name (parameter list)
    {
        // body of the function
        return value;
    }

Advantages of Using Functions:

> By using functions, we can avoid rewriting same logic/code again and again in a program.
> We can call C functions any number of times in a program and from any place in a program.
> We can track a large C program easily when it is divided into multiple functions.
> Reusability is the main achievement of C functions.
> However, Function calling is always a overhead in a C program.

Disadvantages of Using Functions:

> If we use too many functions in a C program, then it is hard to track the flow of the program.
> Function calling is always a overhead in a C program.


*/

#include<stdio.h>

// Function with no argument and no return value
void add(); // declaration

int main() {
       // Function calling
    add();
          return 0;
}

void add() {    // definition
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("Sum = %d\n", c);
}

/*
Tasks:

1. Write a program in C to show the simple structure of a function.
Expected Output :

The total is :  11 

2. Write a program in C to find the square of any number using the function.
Test Data :
Input any number for square : 20
Expected Output :

The square of 20 is : 400.00


3. Write a program in C to swap two numbers using a function.
Test Data :
Input 1st number : 2
Input 2nd number : 4
Expected Output :

Before swapping: n1 = 2, n2 = 4                                                 After swapping: n1 = 4, n2 = 2

4. Write a program in C to check if a given number is even or odd using the function.
Test Data :
Input any number : 5
Expected Output :

 The entered number is odd. 

5. Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
Expected Output :

 The sum of the series is : 34

6. Write a program in C to convert a decimal number to a binary number using the function.
Test Data :
Input any decimal number : 65
Expected Output :

 The Binary value is : 1000001

7. Write a program in C to check whether a number is a prime number or not using the function.
Test Data :
Input a positive number : 5
Expected Output :

The number 5 is a prime number.

8. Write a program in C to get the largest element of an array using the function.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Expected Output :

The largest element in the array is : 5  

9. Write a program in C to check Armstrong and Perfect numbers using the function.
Test Data :
Input any number: 371
Expected Output :

 The 371 is an Armstrong number.                                                 The 371 is not a Perfect number. 

10. Write a program in C to print all perfect numbers in a given range using the function.
Test Data :
Input lowest search limit of perfect numbers : 1
Input lowest search limit of perfect numbers : 100
Expected Output :

 The perfect numbers between 1 to 100 are :                                      6   28 

11. Write a program in C to check whether two given strings are an anagram.
Test Data :
Input the first String : spare
Input the second String : pears
Expected Output :

 spare and pears are Anagram.   

12. Write a C program to find the maximum and minimum of some values using a function that returns an array.
Test Data :
Input 5 values
25
11
35
65
20
Expected Output :

Number of values you want to input: Input 5 values
Minimum value is: 11
Maximum value is: 65 
*/