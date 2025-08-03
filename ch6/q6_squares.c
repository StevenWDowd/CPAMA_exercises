#include <stdio.h>
void squares();

int main(void){
    squares();
    return 0;
}

void squares(void){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int to_square = 2;
    int squared = 2 * 2;
    while (squared < n + 1){
        if (squared % 2 == 0){
            printf("%d\n", squared);
        }
        to_square++;
        squared = to_square * to_square;
    }

}