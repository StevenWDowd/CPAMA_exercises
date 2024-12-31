#include <stdio.h>
void loanCalc();
int main(void){
    loanCalc();
    return 0;
}

void loanCalc(void){
    float total, interest, monthly;
    printf("Enter amount of loan: ");
    scanf("%f", &total);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly);

    float mInt = (interest / 100.0) / 12.0;
    int count = 0;
    float balArr[3];
    //float first, second, third;
    while (count < 3){
        //float newBal = total - monthly;
        //total = (newBal * mInt) + newBal;
        float newBal = (total * mInt) + total;
        total = newBal - monthly;
        balArr[count] = total;
        count++;
    }
    printf("Balance remaining after first payment: %.2f\nBalance remaining after second payment: %.2f\nBalance remaining after third payment: %.2f\n",
    balArr[0], balArr[1], balArr[2]);

}