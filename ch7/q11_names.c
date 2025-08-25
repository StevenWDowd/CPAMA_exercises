#include <stdio.h>
#include <ctype.h>
void name_reverse();

int main(void){
    name_reverse();
    return 0;
}

void name_reverse(void){
    printf("Enter a first and last name: ");
    char ch = getchar();
    char init;
    while (ch == ' '){
        ch = getchar();
    }
    init = ch;
    //skip and discard rest of first name
    while (ch != ' '){
        ch = getchar();
    }
    while (ch == ' '){
        ch = getchar();
    }
    //printf("")
    while (ch != '\n' && ch != ' '){
        //printf("in third loop\n");
        printf("%c", ch);
        ch = getchar();
    }
    printf(", %c.\n", init);
}