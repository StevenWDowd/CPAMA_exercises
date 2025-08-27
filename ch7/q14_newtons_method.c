#include <stdio.h>
#include <math.h>
void newtons_method();

int main(void){
    newtons_method();
    return 0;
}

void newtons_method(void){
    double x;
    double y = 1.0;
    double avg; //becomes new y
    double diff;
    printf("Enter a positive number. ");
    scanf("%lf", &x);
    do {
        avg = (y + (x/y)) / 2;
        diff = fabs(y - avg);
        y = avg;
    } while (diff >= (0.00001 * y));
    printf("Square root: %f\n", y);

}