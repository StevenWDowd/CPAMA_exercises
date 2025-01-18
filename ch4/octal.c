#include <stdio.h>
void octal();

int main(void){
    octal();
    return 0;
}

void octal(void){
    int num;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    int digits[5];
    for (int i = 4; i > -1; i--){
        int dig = num % 8;
        digits[i] = dig;
        num = num / 8;
    }
    printf("In octal, your number is: %d%d%d%d%d\n", digits[0], digits[1], digits[2], digits[3], digits[4]);

}