#include <stdio.h>
void calcTax();

int main(void){
    calcTax();
    return 0;
}

void calcTax(void){
    float rate = 0.05f;
    float preTax;
    float total;
    printf("Enter a pre-tax total: ");
    scanf("%f", &preTax);
    total = (rate * preTax) + preTax;
    printf("\aYour post-tax total is: %.2f\n", total);
}