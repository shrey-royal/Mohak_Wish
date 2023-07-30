#include<stdio.h>
#include<string.h>

int main() {
    int num=12345;
    char* str;
    //convert integer to string
    sprintf(str, "%d", num);
    //sprintf(dest_string, "%d", source_integer)
    //reverse the string
    strrev(str);
    //convert string to integer
    sscanf(str, "%d", &num);
    //sscanf(source_string, "%d", &dest_integer)
    printf("%d\n", num);
    
    return 0;
}