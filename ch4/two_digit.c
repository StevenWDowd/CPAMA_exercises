#include <stdio.h>
void two_digit();
void three_digit();

int main(void){
    //two_digit();
    three_digit();
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

void three_digit (void){
    int num, hund, tens, ones;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    hund = (num / 100);
    tens = (num - (hund * 100)) / 10;
    ones = (num % 10);
    printf("The reversal is: %d%d%d\n", ones, tens, hund);
}