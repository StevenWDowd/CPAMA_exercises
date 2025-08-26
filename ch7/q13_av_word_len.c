#include <stdio.h>
#include <ctype.h>
void word_length();

int main(void){
    word_length();
    return 0;
}

void word_length(void){
    printf("Enter a sentence: ");
    int w_count = 0;
    int c_count = 0;
    float avg;
    char ch;

    ch = getchar();
    while(ch != '\n'){
        while (ch != ' ' && ch != '\n')
        {
            //printf("inner loop entered\n");
            c_count++;
            ch = getchar();
            if (ch == '\n') break;
        }
        w_count++;
        if (ch == '\n') break;
        //printf("back to outer loop\n");
        //w_count++;
        ch = getchar();
    }
    avg = (float) c_count / (float) w_count;
    printf("Average word length: %.1f\n", avg);

}