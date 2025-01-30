#include <stdio.h>
void broker();

int main(void){
    broker();
    return 0;
}

void broker(void){
    int shares;
    float sharePrice, commission, totalVal, rivalComm;
    printf("Enter the number of shares: ");
    scanf("%d", &shares);
    printf("Enter the price per share: ");
    scanf("%f", &sharePrice);
    totalVal = shares * sharePrice;

    //our broker commish
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

    //rival commish
    if (shares < 2000){
        rivalComm = 33.00f + (.03f * shares);
    } else {
        rivalComm = 33.00f + (.02f * shares);
    }

    printf("Our commission is: %.2f\nThe rival commssion is: %.2f\n", commission, rivalComm);
}