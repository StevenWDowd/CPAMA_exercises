#include <stdio.h>
void dates();

int main(void){
    dates();
    return 0;
}

void dates(void){
    int y1, y2, m1, m2, d1, d2;
    printf("Enter first date (mm/dd/yyyy):");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yyyy):");
    scanf("%d/%d/%d", &m2, &d2, &y2);
    if (y1 != y2){
        if (y1 < y2){
            printf("Date 1 is earlier\n");
        } else {
            printf("Date 2 is earlier\n");
        }
    } else if (m1 != m2){
        if (m1 < m2){
            printf("Date 1 is earlier\n");
        } else {
            printf("Date 2 is earlier\n");
        }
    } else if (d1 != d2){
        if (d1 < d2){
            printf("Date 1 is earlier\n");
        } else {
            printf("Date 2 is earlier\n");
        }
    } else {
        printf("The two dates are equivalent\n");
    }
}