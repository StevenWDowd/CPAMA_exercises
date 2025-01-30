#include <stdio.h>
void convert_time();

int main(void){
    convert_time();
    return 0;
}

void convert_time(void){
    int hours, mins;
    char first = 'A';
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &mins);
    if (hours > 12){
        hours-= 12;
        first = 'P';
    }
    printf("Equivalent 12-hour time: %d:%.2d %cM\n", hours, mins, first);
}