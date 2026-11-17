/*
Experiment 6 - Question 4

Demonstrate the insertion operation by writing a C program that accepts an element and a valid position from the user and inserts the element into the specified position in an array, shifting subsequent elements accordingly.
*/

#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int *x1 = &x;
    int *y1 = &y;
    int sum = *x1+*y1;
    printf("%d",sum);
    return 0;
}
