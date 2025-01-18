#include <stdio.h>
void upc();

int main(void){
    upc();
    return 0;
}

void upc(void){
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
    int num1, num2, adj_total, check;
    num1 = d + i2 + i4 + j1 + j3 + j5;
    num2 = i1 + i3 + i5 + j2 + j4;
    adj_total = ((3 * num1) + num2) - 1;
    check = 9 - (adj_total % 10);
    printf("Check digit: %d\n", check);
}