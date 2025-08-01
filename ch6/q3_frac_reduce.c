#include <stdio.h>
void frac_reduce();
int gcd();

int main(void){
    frac_reduce();
    return 0;
}

void frac_reduce(void){
    int numer, denom;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numer, &denom);
    int common = gcd(numer, denom);
    printf("In lowest terms: %d/%d\n", (numer/common), (denom/common));

}

int gcd(int num1, int num2){
    do {
        int rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    } while (num2 > 0);

    return num1;
}