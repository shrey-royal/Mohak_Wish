#include<stdio.h>
#include<string.h>

struct Student {
    int roll_no;    //4 bytes
    char name[20];  //20 bytes
    float fees;     //4 bytes
    union {
        int a;
        char b;
    } u;    //name of the union is u

    struct {
        int a;
        char b;
    } s;    //name of the structure is s
}s0, s1;

union Student1 {
    int roll_no;    //4 bytes
    // char name[20];  //20 bytes
    float fees;     //4 bytes
    double d;       //8 bytes
};

//define a method that will take a structure as a parameter and scan the details of student
void scanDetails(struct Student *s) {
    printf("Enter the roll number: ");
    scanf("%d", &s->roll_no);
    printf("Enter the name: ");
    scanf("%s", s->name);
    printf("Enter the fees: ");
    scanf("%f", &s->fees);
}

//define a method that will take a structure as a parameter and print the details of student
void printDetails(struct Student s) {
    //Tabular format
    printf("\nRoll No\tName\tFees\n");
    printf("%d\t%s\t%f\n", s.roll_no, s.name, s.fees);
}


int main() {
    // Declaring structure variable
    // struct Student s2, s3;

    // s0.roll_no = 1;
    // strcpy(s0.name, "Mohak");
    // s0.fees = 10000;

    // scanDetails(&s1);
    // scanDetails(&s2);
    // scanDetails(&s3);

    // printf("\nRoll No of s0 is %d", s0.roll_no);
    // printf("\nName of s0 is %s", s0.name);
    // printf("\nFees of s0 is %f", s0.fees);


    // printDetails(s1);
    // printDetails(s2);
    // printDetails(s3);

    printf("Size of this Student structure is %d", sizeof(struct Student));
    printf("\nSize of this Student1 union is %d", sizeof(union Student1));


    return 0;
}


/*
Structure is a user defined data type in C. Structure is used to group different data types together.

In Array we sued to store same data type but in structure we can store different data types.

*/