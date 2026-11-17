/*
Experiment 4 - Question 5

Develop a C program to determine whether a given number is a Perfect Number.
*/

#include <stdio.h>

int main() {
    int n = 28;
    int w = n;
    int add = 0,i;
    for (i=1; i<w; i++) {
        if (n%i==0) {
            add+=i;
        }
    }
    printf("%d",add);
    return 0;
}
