#include <stdio.h>
void upc2();

int main(void){
    upc2();
    return 0;
}

void upc2(void){
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, c1;
    printf("Enter a 12-digit UPC to check: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &c1);
    int num1, num2, adj_total, check;
    num1 = d + i2 + i4 + j1 + j3 + j5;
    num2 = i1 + i3 + i5 + j2 + j4;
    adj_total = ((3 * num1) + num2) - 1;
    check = 9 - (adj_total % 10);
    if (check == c1){
        printf("VALID\n");
    } else {
        printf("NOT VALID\n");
    }
}