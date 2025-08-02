#include <stdio.h>
void broker_two();

int main(void){
    broker_two();
    return 0;
}

void broker_two(void){
    float totalVal, commission;
    printf("Enter a value of a trade: ");
    scanf("%f", &totalVal);
    do {
    if (totalVal < 2500.00f){
        commission = 30.00f + (.017f * totalVal);
    } else if (totalVal < 6250.00f){
        commission = 56.00f + (.0066f * totalVal);
    } else if (totalVal < 20000.00f){
        commission = 76.00f + (.0034f * totalVal);
    } else if (totalVal < 50000.00f){
        commission = 100.00f + (.0022f * totalVal);
    } else if (totalVal < 500000.00f){
        commission = 155.00f + (.0011f * totalVal);
    } else {
        commission = 255.00f + (.0009f * totalVal);
    }

    if (commission < 39.00f){
        commission = 39.00f;
    }
    printf("Commission : %.2f\n", commission);
    printf("Enter a value of a trade: ");
    scanf("%f", &totalVal);
    } while (totalVal > 0);
}