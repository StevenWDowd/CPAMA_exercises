#include <stdio.h>
void loan_balance();

int main(void){
    loan_balance();
    return 0;
}

void loan_balance(void){
    float total, interest, monthly;
    int months;
    printf("Enter amount of loan: ");
    scanf("%f", &total);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly);
    printf("Enter number of months to pay: ");
    scanf("%d", &months);

    float mInt = (interest / 100.0) / 12.0;
    int count = 0;
    //float balArr[months];
    //float first, second, third;
    while (count < months){
        //float newBal = total - monthly;
        //total = (newBal * mInt) + newBal;
        float newBal = (total * mInt) + total;
        total = newBal - monthly;
        //balArr[count] = total;
        count++;
        printf("Total after monthly payment %d is: %.2f\n", (count + 1), total);
    }
}