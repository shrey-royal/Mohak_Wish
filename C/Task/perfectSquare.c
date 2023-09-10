#include<stdio.h>
#include<math.h>

int isPerfectSquare(int n) {
    int i;
    for(i=1; i*i <= n; i++) {
        if(i*i == n) {
            return 1;
        }
    }
    return 0;
}

int isPowerOfTwo(int num) {
    return (num > 0) && ((num & (num - 1)) == 0);
}


int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // if (isPerfectSquare(num)) {
    //     printf("%d is a perfect square\n", num);
    // } else {
    //     printf("%d is not a perfect square\n", num);
    // }

    // double sqrtNum = sqrt(num);

    // //floor function returns the largest integer less than or equal to x
    // // printf("floor(sqrt(%d)) = %d\n", num, (int)floor(sqrtNum));
    // if(sqrtNum - floor(sqrtNum) == 0) {
    //     printf("%d is a perfect square\n", num);
    // } else {
    //     printf("%d is not a perfect square\n", num);
    // }

    if(isPowerOfTwo(num)) {
        printf("%d is a power of two\n", num);
    } else {
        printf("%d is not a power of two\n", num);
    }


    return 0;
}