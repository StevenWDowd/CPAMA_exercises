#include <stdio.h>
void approx_e();
int factorial();

int main(void){
    approx_e();
    return 0;
}

void approx_e(void){
    int n;
    printf("Enter a float value for n: ");
    scanf("%d", &n);
    float total = 1.0f;
    int denom = 1;
    while (denom < n+1){
        int fact = factorial(denom);
        total+= 1.0f / fact;
        denom++;
    }
    printf("The approximation of e is: %.2f\n", total);

}

int factorial(int num){
    int ans = 1;
    while (num > 0){
        ans*= num;
        num--;
    }
    return ans;
}