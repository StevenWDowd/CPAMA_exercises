#include <stdio.h>

int main(void){
    int x;
    int result;
    printf("Enter an integer value for x: ");
    scanf("%d", &x);
    //result = 3*(x * x * x * x * x) + 2*(x* x * x * x) - 5*(x * x * x) - (x * x) + (7 * x) + 6;
    result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("Result is: %d\n", result);
    return 0;
    //getting different results; what's up with that?
}