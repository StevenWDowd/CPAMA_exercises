#include <stdio.h>
#include <stdbool.h>

void repdigit3();

int main(void){
    repdigit3();
    return 0;
}

void repdigit3(void){
    bool digit_seen[10] = {false};
    bool dig_print[10] = {false};
    bool is_repeat = false;
    int digit;
    long n;
    printf("Enter a number (enter 0 or less to terminate): ");
    scanf("%ld", &n);

    //maybe better to make an array for repeated digits?
    //printf("Repeated digits: ");
    while (n > 0){

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
    //reset start conditions
    is_repeat = false;
    for (int i = 0; i < 10; i++){
        digit_seen[i] = false;
        dig_print[i] = false;
    }
    printf("Enter a number (0 or less to terminate): ");
    scanf("%ld", &n);
}
}