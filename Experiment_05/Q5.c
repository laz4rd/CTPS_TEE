/*
Experiment 5 - Question 5

Q2 — Print the following pattern:
Enter a positive number n: 5
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include <stdio.h>

int main() {
    int i,j;
    for (i = 0; i<5; i++) {
        for (j=0; j<i; j++) {
            if ((i+j)%2==0) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}
