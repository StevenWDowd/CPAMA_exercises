#include <stdio.h>
void rev_digits();

int main(void){
    rev_digits();
    return 0;
}

void rev_digits(void){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int new_num = 0;
    do {
        int rem = num % 10;
        num = (num - rem) / 10;
        new_num = (new_num * 10) + rem;
    } while (num > 0);
    printf("Your number in reverse: %d\n", new_num);
}