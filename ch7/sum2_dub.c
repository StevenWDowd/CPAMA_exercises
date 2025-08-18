#include <stdio.h>
void sum2();

int main(void){
    sum2();
    return 0;
}

void sum2(void){
    double n, sum = 0;
    printf("Enter numbers (0 to terminate): ");
    scanf("%lf", &n);
    while (n != 0){
        sum+= n;
        scanf("%lf", &n);
    }
    printf("The sum is %lf\n", sum);
}