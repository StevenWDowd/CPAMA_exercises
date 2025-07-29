#include <stdio.h>
void greatest_num();

int main(void){
    greatest_num();
    return 0;
}

void greatest_num(void){
    float greatest = 0;
    float curr;
    printf("Enter a number: ");
    scanf("%f", &curr);
    while (curr > 0){
        if (curr > greatest) greatest = curr;
        printf("Enter a number: ");
        scanf("%f", &curr);
    }
    printf("The greatest number entered was: %f\n", greatest);
}