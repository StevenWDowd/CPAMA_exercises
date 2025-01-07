#include <stdio.h>

int main(void){
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

}