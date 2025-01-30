#include <stdio.h>
void beaufort();

int main(void){
    beaufort();
    return 0;
}

void beaufort(void){
    float windSpeed;
    printf("Enter a wind speed in knots: ");
    scanf("%f", &windSpeed);
    if (windSpeed < 1){
        printf("Calm\n");
    } else if (windSpeed < 3){
        printf("Light air\n");
    } else if (windSpeed < 27){
        printf("Breeze\n");
    } else if (windSpeed < 47){
        printf("Gale\n");
    } else if( windSpeed < 63){
        printf("Storm\n");
    } else {
        printf("Hurricane\n");
    }
}