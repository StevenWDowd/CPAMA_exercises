#include <stdio.h>
#include <ctype.h>
void change_time();

int main(void){
    change_time();
    return 0;
}

void change_time(void){
    int hours, minutes;
    char half;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    //only a or p matters
    half = toupper(getchar());
    while (half != 'A' && half != 'P'){
        half = toupper(getchar());
    }
    if (half == 'P'){
        hours+= 12;
    }
    if (minutes > 9){
        printf("Equivalent 24-hour time: %d:%d\n", hours, minutes);
    } else {
        printf("Equivalent 24-hour time: %d:0%d\n", hours, minutes);
    }

}