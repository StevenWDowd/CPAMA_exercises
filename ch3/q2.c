#include <stdio.h>

int main(void){
    float x = 541.3579f;
    //a
    printf("%-8.1e", x);
    //b
    printf("%10.6e", x);
    //c
    printf("%-8.3f", x);
    //d
    printf("%-6.0f", x);
    return 0;
}