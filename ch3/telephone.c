#include <stdio.h>
void telephone();

int main(void){
    telephone();
    return 0;
}

void telephone(void){
    int area, p1, p2;
    printf("Enter your phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area, &p1, &p2);
    printf("You entered %.3d.%.3d.%.4d\n", area, p1, p2);

}