#include <stdio.h>
void approx_e();
int factorial();

int main(void){
    approx_e();
    return 0;
}

void approx_e(void){
    //int n = 1;
    float epsilon;
    // printf("Enter a float value for n: ");
    // scanf("%d", &n);
    printf("Enter an epsilon value as a cutoff for added terms: ");
    scanf("%f", &epsilon);
    float total = 1.0f;
    int denom = 1;
    int fact = factorial(denom);
    float to_add = 1.0f / fact;
    while (to_add > epsilon){
        total+= to_add;
        denom++;
        fact = factorial(denom);
        to_add = 1.0f/fact;
    }
    printf("The approximation of e is: %.4f\n", total);

}

int factorial(int num){
    int ans = 1;
    while (num > 0){
        ans*= num;
        num--;
    }
    return ans;
}