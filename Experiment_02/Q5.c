/*
Experiment 2 - Question 5

Write a C program to demonstrate type conversion by converting a float to an integer and an integer to a float and displaying the results.
*/

#include <stdio.h>

int main() {

    float x = 10.12;
    printf("%.2f\n",x);
    int y = (int)x;
    printf("%d \n",y);

    return 0;
}
