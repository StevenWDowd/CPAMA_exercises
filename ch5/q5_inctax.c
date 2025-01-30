#include <stdio.h>
void inctax();

int main(void){
    inctax();
    return 0;
}

void inctax(void){
    float taxable, due;
    printf("Enter your taxable income: ");
    scanf("%f", &taxable);
    if (taxable < 750.00f){
        due = taxable * .01f;
    } else if (taxable < 2250.00f){
        due = 7.50f + (taxable - 750.00f) * .02f;
    } else if (taxable < 3750.00f){
        due = 37.50f + (taxable - 2250.00f) * .03f;
    } else if (taxable < 5250.00f){
        due = 82.50f + (taxable - 3750.00f) * .04f;
    } else if (taxable < 7000.00f){
        due = 142.50f + (taxable - 5250.00f) * .05f;
    } else {
        due = 230.00f + (taxable - 7000.00f) * .06f;
    }

    printf("Payment due: %.2f\n", due);
}