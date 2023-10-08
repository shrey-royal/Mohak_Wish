#include <stdio.h>
#include <stdlib.h>

void scanArray(char* a[], int row) {
    for(int i = 0; i < row; i++) {
        printf("Enter a Name: ");
        a[i] = (char *)malloc(20); // Allocate memory for each string
        scanf(" %[^\n]s", a[i]);
    }
}

void printArray(char* arr[], int row) {
    for(int i = 0; i < row; i++) {
        printf("%s\n", arr[i]);
        free(arr[i]); // Free the memory allocated for each string
    }
}

int main() {
    int row;
    printf("Enter the number of names: ");
    scanf("%d", &row);

    char* arr[row]; // Declare an array of pointers to char

    scanArray(arr, row);
    printArray(arr, row);

    return 0;
}

/*
Scenario 1: Address Book
   - Create a program to manage an address book where each entry includes a name, phone number, and address. Use a 2D array to store this information, and implement functions to add, search for, and display contacts.

Scenario 2: Student Grades
   - Develop a program for a teacher to input and calculate the average grades of students in a class. Store student names and their corresponding test scores in a 2D array.

Scenario 3: File Management
   - Build a file management system that stores the names of files and their respective file paths. Use a 2D character array to manage this information and implement functions for adding, deleting, and searching for files.

Scenario 4: Calendar Application
   - Create a calendar application where each day's events are stored as strings in a 2D array. Implement functions to add, edit, and display events for specific dates.

Scenario 5: Employee Records
   - Build a program for a human resources department to manage employee records. Store employee names, IDs, and job titles in a 2D array and provide functionality for adding, searching, and updating employee information.

Scenario 6: Inventory Management
   - Develop an inventory management system for a store. Use a 2D array to store product names, prices, and quantities. Implement functions to add products, update quantities, and calculate total inventory value.

Scenario 7: Word Puzzle Solver
   - Create a word puzzle solver that searches for words within a grid of characters. Use a 2D array to represent the grid and implement functions to search for words in all directions (horizontal, vertical, diagonal).

Scenario 8: Scrabble Game
   - Implement a Scrabble game where players input words on a game board. Use a 2D array to represent the game board, with each cell containing a character. Validate the words played by checking their validity against a dictionary.

Scenario 9: Airport Flight Schedule
   - Build a program that manages an airport's flight schedule. Store flight information, including flight numbers, departure times, and destinations, in a 2D array. Implement functions for adding, searching, and updating flight details.

Scenario 10: Hotel Reservation System
   - Develop a hotel reservation system that stores guest information, including names and room numbers, in a 2D array. Implement functions for booking rooms, checking availability, and displaying guest details.
*/