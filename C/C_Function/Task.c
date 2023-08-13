#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n = 5;  // Number of terms in the series
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        sum += (double) factorial(i) / i;
    }

    printf("The sum of the series is : %.2lf\n", sum);

    return 0;
}
