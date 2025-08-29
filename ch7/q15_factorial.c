#include <stdio.h>
void factorial();

int main(void){
    factorial();
    return 0;
}

void factorial(void){
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;

    printf("Enter a short: ");
    //int ch = getchar();
    scanf("%hi", &s);

    short s_ans = 1;
    while (s > 1){
        s_ans = s * s_ans;
        s--;
    }
    printf("Factorial for short: %hi\n", s_ans);

    printf("Enter an int: ");
    scanf("%d", &i);

    int i_ans = 1;
    while (i > 1){
        i_ans = i * i_ans;
        i--;
    }
    printf("Factorial for int: %d\n", i_ans);

    printf("Enter a long: ");
    scanf("%ld", &l);

    long l_ans = 1;
    while (l > 1){
        l_ans = l * l_ans;
        l--;
    }
    printf("Factorial for long: %ld\n", l_ans);

    printf("Enter a long long: ");
    scanf("%lld", &ll);

    long long ll_ans = 1;
    while (ll > 1){
        ll_ans = ll * ll_ans;
        ll--;
    }
    printf("Factorial for long long: %lld\n", ll_ans);

    printf("Enter a float: ");
    scanf("%f", &f);

    float f_ans = 1.0f;
    while (f > 1){
        f_ans = f * f_ans;
        f--;
    }
    printf("Factorial for float: %f\n", f_ans);

    printf("Enter a double: ");
    scanf("%lf", &d);

    double d_ans = 1.0f;
    while (d > 1){
        d_ans = d * d_ans;
        d--;
    }
    printf("Factorial for double: %lf\n", d_ans);

    printf("Enter a long double: ");
    scanf("%Lf", &ld);

    long double ld_ans = 1.0f;
    while (ld > 1){
        ld_ans = ld * ld_ans;
        ld--;
    }
    printf("Factorial for long double: %Lf\n", ld_ans);







}