#include <stdio.h>
#include <ctype.h>
void count_vowels();

int main(void){
    count_vowels();
    return 0;
}

void count_vowels(void){
    int count = 0;
    char ch;
    printf("Enter a phrase: ");
    ch = getchar();
    while (ch != '\n'){
        switch(toupper(ch)){
            case 'A': case 'E': case 'O': case 'I': case 'U':
            count++; break;
            default:
            //nothing
        }
        ch = getchar();
    }
    printf("The number of vowels is: %d\n", count);

}

