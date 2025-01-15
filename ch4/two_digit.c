#include <stdio.h>
void two_digit();

int main(void){
    two_digit();
    return 0;
}

void two_digit(void){
    int num, tens, ones;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    tens = (num - (num % 10)) / 10;
    ones = num % 10;
    printf("The reversal is %d%d\n", ones, tens);
}