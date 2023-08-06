#include<stdio.h>
int main() {
    int i=0;
    do {
        int j=0;
        do
        {
            if (i==0 || i==5 || j==0 || j==5 || i == j || i == 5-j) printf("* ");
            else printf("  ");
            j++;
        } while (j<=5);
        printf("\n");
        i++;
    } while(i<=5);
    
    return 0;
}

/*
Box Pattern
Box Pattern: Hollow

Triangle Pattern
Triangle Pattern: Hollow

Mirrored Triangle Pattern
Mirrored Triangle Pattern: Hollow

------------------
kaju katri
kaju katri: Hollow
*/