#include <iostream>
#include <string>
using namespace std;


float division(int x, int y) {
    if(y == 0) {
        throw "Division by zero condition!";
    }
    return x/y;
}

int main() {

    cout << "Before exception" << endl;
    
    try {
        cout << division(25, 0) << endl;
    } catch(const char* e) {
        cerr << e << endl;
    }
    cout << "After exception" << endl;

    return 0;
}

/*
Tasks:

1. Multiple Division Operations:

   - Scenario: Extend the code to perform multiple division operations based on user input. Prompt the user to enter the number of division operations they want to perform and then input pairs of 'x' and 'y' values for each operation. Handle division by zero errors and invalid input values gracefully using custom exceptions.

   - Objective: Modify the code to allow multiple division operations and handle exceptions for each operation individually.

   - Tasks:
     - Prompt the user to enter the number of division operations they want to perform.
     - For each operation, allow the user to input 'x' and 'y' values.
     - Implement error checking to ensure that 'y' is not zero and that both 'x' and 'y' are valid integers for each operation.
     - Use exception handling to catch and handle division by zero errors and input-related errors for each operation separately.
     - Display informative messages for each exception, indicating which operation caused the error.

These scenarios introduce different use cases and challenges for the code, such as integrating file operations and handling multiple division operations with user input, while still focusing on exception handling and error reporting.

*/