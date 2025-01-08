#include <stdio.h>
void isbn();

int main(void){
    isbn();
    return 0;
}

void isbn(void){
    int gs1, group, publisher, itemNo, checkDig;
    printf("Enter an ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &itemNo, &checkDig);
    printf("GS1 Prefix: %d\nGroup Identifier: %d\nPublisher Code: %d\nItem Number: %d\nCheck Digit: %d\n",
        gs1, group, publisher, itemNo, checkDig);
}