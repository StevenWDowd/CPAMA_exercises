#include <stdio.h>
#include <ctype.h>
void scrab_score();

int main(void){
    scrab_score();
    return 0;
}

void scrab_score(void){
    char ch;
    int score = 0;
    printf("Enter a word: ");
    ch = getchar();
    while (ch != '\n'){
        switch (toupper(ch)){
            case 'D': case 'G':
            score+=2; break;
            case 'B': case 'C': case 'M': case 'P':
            score+=3; break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
            score+=4; break;
            case 'K':
            score+=5; break;
            case 'J': case 'X':
            score+=8; break;
            case 'Q': case 'Z':
            score+=10; break;
            default:
            score+=1; break;
        }
        ch = getchar();
    }
    printf("Your word's Scrabble score is: %d\n", score);
}