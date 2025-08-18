#include <stdio.h>
void print_sq_24();

int main(void){
    print_sq_24();
    return 0;
}

void print_sq_24(void){
    //pause after every 24 squares and say: Press Enter to continue.
    //use getchar to read and continue
    int i, n;
    char ch;
    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in the table: ");
    scanf("%d", &n);
    ch = getchar();
    int counter = 0;
    for (i = 1; i <= n; i++){
        printf("%10d%10d\n", i, i*i);
        counter++;
        if (counter == 24){
            printf("Press Enter to continue.");
            if (getchar() != '\n'){
                break;
            }
            counter = 0;
        }
    }
}