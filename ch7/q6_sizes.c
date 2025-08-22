#include <stdio.h>
void size_printer();

int main(void){
    size_printer();
    return 0;
}

void size_printer(void){
    //cast as int?
    printf("Sizeof int: %d\n", (int) sizeof(int));
    printf("Sizeof short: %d\n", (int) sizeof(short));
    printf("Sizeof long: %d\n", (int) sizeof(long));
    printf("Sizeof double: %d\n", (int) sizeof(double));
    printf("Sizeof double: %d\n", (int) sizeof(double));
    printf("Sizeof long double: %d\n", (int) sizeof(long double));
}