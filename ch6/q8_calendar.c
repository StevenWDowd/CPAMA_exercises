#include <stdio.h>
void calendar();

int main(void){
    calendar();
    return 0;
}

void calendar(void){
    int days, start_day;
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);
    if (start_day != 1){
        int spaces = 1;
        while (spaces < start_day) {
            printf(" ");
            spaces++;
        }
    }
    int place = start_day;
    for (int i = 1; i < days + 1; i++){
        printf("%d", i);
        place++;
        if (place > 7){
            printf("\n");
            place = 1;
        } else {
            printf(" ");
        }
    }
    printf("\n");
}