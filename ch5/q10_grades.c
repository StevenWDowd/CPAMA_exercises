#include <stdio.h>
void convert_grade();

int main(void){
    convert_grade();
    return 0;
}

void convert_grade(void){
    int grade;
    printf("Enter a grade on the 0-100 scale: ");
    scanf("%d", &grade);
    int rem = grade % 10;
    grade = (grade - rem) / 10;

    switch (grade){
        case 10: case 9 : printf("Letter Grade: A\n");
        break;
        case 8: printf("Letter Grade: B\n");
        break;
        case 7: printf("Letter Grade: C\n");
        break;
        case 6: printf("Letter Grade: D\n");
        break;
        case 5: case 4: case 3: case 2: case 1: case 0: printf("Letter Grade: F\n");
        break;
        default: printf("Illegal grade entered\n");
    }
}