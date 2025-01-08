#include <stdio.h>

void prodInfo();

int main(void){
    prodInfo();
    return 0;
}

void prodInfo(void){
    int item, month, day, year;
    float price;
    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t%.2f\t\t%d/%d/%d\n", item, price, month, day, year);
}