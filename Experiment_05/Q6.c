/*
Experiment 5 - Question 6

Q3 — Print the following pattern:
Enter a positive number n: 5
1 1 1 1 1
1 0 0 0 1
1 0 0 0 1
1 1 1 1 1
*/

#include <stdio.h>

int main() {
    int i,j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 0 ||j==0 ||i==5-1 ||j==5-1) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
