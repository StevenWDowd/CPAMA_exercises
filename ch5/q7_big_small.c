#include <stdio.h>
void bigSmall();

int main(void){
    bigSmall();
    return 0;
}

void bigSmall(void){
    int first, second, third, fourth;
    printf("Enter 4 space-separated integers: ");
    scanf("%d %d %d %d", &first, &second, &third, &fourth);
    int max = first, min = first;
    if (second > max){
        max = second;
    }
    if (third > max){
        max = third;
    }
    if (fourth > max){
        max = fourth;
    }

    if (second < min){
        min = second;
    }
    if (third < min){
        min = third;
    }
    if (fourth < min){
        min = fourth;
    }
    printf("The max is %d, and the min is %d\n", max, min);



}