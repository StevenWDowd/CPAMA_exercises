#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


int main(void){
    float r;

    printf("Enter a radius value for your sphere: ");
    scanf("%f", &r);
    float v = 4.0f/3.0f * M_PI *(r * r * r);

    printf("%.3f\n", v);

}