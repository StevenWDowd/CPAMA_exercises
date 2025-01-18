#include <stdio.h>
void ean();

int main(void){
    ean();
    return 0;
}

void ean(void){
    int digits[12];
    int num1, num2, adj_total, check;
    printf("Enter the first 12 digits of an EAN: ");
    for (int i = 0; i < 12; i++){
        scanf("%1d", &digits[i]);
    }
    num1 = 0;
    num2 = 0;
    for (int i = 0; i < 12; i++){
        if (i % 2 == 0){
            num2+= digits[i];
        } else {
            num1+= digits[i];
        }
    }
    adj_total = ((3 * num1) + num2) - 1;
    check = 9 - (adj_total % 10);
    printf("Check digit: %d\n", check);
}