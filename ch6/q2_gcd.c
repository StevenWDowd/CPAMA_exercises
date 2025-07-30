#include <stdio.h>
void gcd();

int main(void){
    gcd();
    return 0;
}

void gcd(void){
    int m, n;
    printf("Provide two integers separated by a space: ");
    scanf("%d %d", &m, &n);
    do {
        int rem = m % n;
        m = n;
        n = rem;
    } while (n > 0);

    printf("The GCD is: %d\n", m);
}