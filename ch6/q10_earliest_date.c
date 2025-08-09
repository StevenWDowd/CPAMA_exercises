#include <stdio.h>
void earliest_date();

int main(void){
    earliest_date();
    return 0;
}

void earliest_date(void){
    //save date1 vals as the earliest date. return when date2 is 0/0/0
    int y1, m1, d1, y2, m2, d2;
    printf("Enter a date in mm/dd/yyyy format: ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    // printf("Enter another date. Terminate by entering 0/0/0: ");
    // scanf("%d/%d/%d", &m2, &d2, &y2);
    y2 = y1;
    m2 = m1;
    d2 = d1;
    while (d2 != 0 && m2 != 0 && y2 != 0){
    printf("Enter another date. Terminate by entering 0/0/0: ");
    scanf("%d/%d/%d", &m2, &d2, &y2);
    if (y2 == 0 && m2 == 0 && d2 == 0) break;
    if (y1 != y2){
        if (y1 < y2){
            //date one earlier, keep as-is
        } else {
            y1 = y2;
            m1 = m2;
            d1 = d2;
        }
    } else if (m1 != m2){
        if (m1 < m2){
            //keep
        } else {
            y1 = y2;
            m1 = m2;
            d1 = d2;
        }
    } else if (d1 != d2){
        if (d1 < d2){
            //keep
        } else {
            y1 = y2;
            m1 = m2;
            d1 = d2;
        }
    } else {
        //equal dates, do nothing
    }
    }
    printf("Earliest date entered: %d/%d/%d\n", m1, d1, y1);

}