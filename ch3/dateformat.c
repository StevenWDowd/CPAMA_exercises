#include <stdio.h>
void dateForm();

int main(void){
    dateForm();
    return 0;
}

void dateForm(void){
    int month, day, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date: %d%d%d\n", month, day, year);
}