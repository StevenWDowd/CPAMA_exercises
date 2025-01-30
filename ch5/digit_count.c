#include <stdio.h>

void digit_count();

int main(void){
    digit_count();
    return 0;
}

void digit_count(void){
    int num, digs;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10){
        digs = 1;
    } else if (num < 100){
        digs = 2;
    } else {
        digs = 3;
    }

    //should find a way to handle plural/singular of digit/s
    printf("The number %d has %d digits.\n", num, digs);
}