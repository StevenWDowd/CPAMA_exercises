#include <stdio.h>
void convert_num();

int main(void){
    convert_num();
    return 0;
}

void convert_num(void){
    int num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    if (num < 10 || num > 99){
        printf("Illegal number entered.\n");
    } else {

    switch(num){
        case 10: printf("Ten\n");
        break;
        case 11: printf("Eleven\n");
        break;
        case 12: printf("Twelve\n");
        break;
        case 13: printf("Thirteen\n");
        break;
        case 14: printf("Fourteen\n");
        break;
        case 15: printf("Fifteen\n");
        break;
        case 16: printf("Sixteen\n");
        break;
        case 17: printf("Seventeen\n");
        break;
        case 18: printf("Eighteen\n");
        break;
        case 19: printf("Nineteen\n");
        break;
    }
    if (num > 19) {
    int ones = num % 10;
    int tens = (num - ones) / 10;
    switch(tens){
        case 2: printf("Twenty");
        break;
        case 3: printf("Thirty");
        break;
        case 4: printf("Forty");
        break;
        case 5: printf("Fifty");
        break;
        case 6: printf("Sixty");
        break;
        case 7: printf("Seventy");
        break;
        case 8: printf("Eighty");
        break;
        case 9: printf("Ninety");
        default: printf("");
    }

    switch(ones){
        case 0: printf("\n");
        break;
        case 1: printf("-One\n");
        break;
        case 2: printf("-Two\n");
        break;
        case 3: printf("-Three\n");
        break;
        case 4: printf("-Four\n");
        break;
        case 5: printf("-Five\n");
        break;
        case 6: printf("-Six\n");
        break;
        case 7: printf("-Seven\n");
        break;
        case 8: printf("-Eight\n");
        break;
        case 9: printf("-Nine\n");
        break;
    }
}}

}