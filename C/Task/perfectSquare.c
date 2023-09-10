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

int areAnagrams(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If the lengths of the two strings are different, they can't be anagrams
    if (len1 != len2) {
        return 0;
    }

    // Sort the characters in both strings
    for (int i = 0; i < len1 - 1; i++) {
        for (int j = i + 1; j < len1; j++) {
            if (str1[i] > str1[j]) {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
            if (str2[i] > str2[j]) {
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    // Compare the sorted strings
    if ((str1 == str2) == 0) {
        return 1; // The strings are anagrams
    } else {
        return 0; // The strings are not anagrams
    }
}

int main() {
    // int num;

    // printf("Enter a number: ");
    // scanf("%d", &num);

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

    // if(isPowerOfTwo(num)) {
    //     printf("%d is a power of two\n", num);
    // } else {
    //     printf("%d is not a power of two\n", num);
    // }

    char str1[] = "listen";
    char str2[] = "silent";

    if(areAnagrams(str1, str2)) {
        printf("\n%s and %s are anagrams\n", str1, str2);
    } else {
        printf("\n%s and %s are not anagrams\n", str1, str2);
    }


    return 0;
}