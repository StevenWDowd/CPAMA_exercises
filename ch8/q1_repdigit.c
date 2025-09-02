#include <stdio.h>
#include <stdbool.h>

void repdigit();

int main(void){
    repdigit();
    return 0;
}

void repdigit(void){
    bool digit_seen[10] = {false};
    bool dig_print[10] = {false};
    bool is_repeat = false;
    int digit;
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);

    //maybe better to make an array for repeated digits?
    //printf("Repeated digits: ");

    while (n > 0){
        digit = n % 10;
        if (digit_seen[digit]){
            dig_print[digit] = true;
            is_repeat = true;
        }
        digit_seen[digit] = true;
        n /= 10;
    }
    if (is_repeat){
        printf("Repeated digits:");
        for (int i = 0; i < 10; i++){
            if (dig_print[i]) printf(" %d", i);
        }
        printf("\n");
    } else {
        printf("There are no repeated digits.\n");
    }
}