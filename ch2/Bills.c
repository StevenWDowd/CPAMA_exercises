#include <stdio.h>
void billCount();

int main(void){
    billCount();
    return 0;
}

void billCount(void){
    int total;
    int twenties = 0;
    int tens = 0;
    int fives = 0;
    int ones = 0;
    printf("Enter a dollar amount: ");
    scanf("%d", &total);
    // while (total > 0){
    //     int rem;
    //     int
    // }
    while (total > 0){
        if (total >= 20){
            total = total - 20;
            twenties++;
        }
        if (total >= 10 && total < 20){
            total = total - 10;
            tens++;
        }
        if (total >= 5 && total < 10){
            total = total - 5;
            fives++;
        }
        if (total >= 1 && total < 5){
            total = total - 1;
            ones++;
        }
    }
    printf("20s: %d\n10s: %d\n5s: %d\n1s: %d\n", twenties, tens, fives, ones);


}