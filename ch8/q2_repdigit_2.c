#include <stdio.h>
#include <stdbool.h>
void repdigit2();

int main(void){
    repdigit2();
    return 0;
}

void repdigit2(void){
    int freqs[10] = {0};
    int digit;
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);

     while (n > 0){
        digit = n % 10;
        freqs[digit] = freqs[digit] + 1;
        n /= 10;
    }

    printf("Digit:       0 1 2 3 4 5 6 7 8 9\n");
    printf("Occurrences: ");
    for (int i = 0; i < 10; i++){
        printf("%d ", freqs[i]);
    }
    printf("\n");
}