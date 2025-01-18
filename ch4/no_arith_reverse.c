#include <stdio.h>
void no_arith_reverse();

int main(void){
    no_arith_reverse();
    return 0;
}

void no_arith_reverse(void){
    int ones, tens, hunds;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &hunds, &tens, &ones);
    printf("The reversal is: %d%d%d\n", ones, tens, hunds);
}