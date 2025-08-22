#include <stdio.h>
void frac_math();

int main(void){
    frac_math();
    return 0;
}

void frac_math(void){
     int num1, denom1, num2, denom2, result_num, result_denom;
     char op;
     printf("Enter two fractions separated by an operator sign (+, -, *, or /): ");
     scanf("%d/%d%c%d/%d", &num1, &denom1, &op, &num2, &denom2);
     if (op == '+'){
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
     }
     if (op == '-'){
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
     }
     if (op == '*'){
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
     }
     if (op == '/'){
        result_num = num1 * denom2;
        result_denom = num2 * denom1;
     }
     printf("Resulting fraction: %d/%d\n", result_num, result_denom);

}