#include <stdio.h>
void magicSquare();
int main(void){
    magicSquare();
    return 0;
}

void magicSquare(void){
    int arr [16];
    printf("Enter the numbers from 1 to 16 in any order. ");
    for (int i = 0; i < 16; i++){
        scanf("%d", &arr[i]);
    }
    int row1 = 0, row2 = 0, row3 = 0, row4 = 0, col1 = 0, col2 = 0, col3 = 0, col4 = 0, dia1 = 0, dia2 = 0;
    for (int i = 0; i < 16; i++){
        int curr = arr[i];
        //handle rows
        if (i < 4){
            row1 = row1 + curr;
        }
        if (i >= 4 && i < 8){
            row2 = row2 + curr;
        }
        if (i >= 8 && i < 12){
            row3 = row3 + curr;
        }
        if (i >= 12 && i < 16){
            row4 = row4 + curr;
        }

        //handle cols
        if (i % 4 == 0){
            col1 = col1 + curr;
        }
        if (i % 4 == 1){
            col2 = col2 + curr;
        }
        if (i % 4 == 2){
            col3 = col3 + curr;
        }
        if (i % 4 == 3){
            col4 = col4 + curr;
        }

        //diags
    }
        dia1 = arr[0] + arr[5] + arr[10] + arr[15];
        dia2 = arr[3] + arr[6] + arr[9] + arr[12];

        for (int i = 0; i < 16; i++){
            int curr = arr[i];
            if (i % 4 == 3){
                printf("%d\n", curr);
            } else {
                printf("%d ", curr);
            }
        }

        printf("Row Sums: %d %d %d %d\n", row1, row2, row3, row4);
        printf("Column Sums: %d %d %d %d\n", col1, col2, col3, col4);
        printf("Diagonal Sums: %d %d\n", dia1, dia2);



}