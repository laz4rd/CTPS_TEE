/*
Experiment 2 - Question 9

Write a C program to interchange the values of two variables, x and y, and display the updated values. (using multiplication and division operator)
*/

#include <stdio.h>

int main() {

    int init1,init2;

    scanf("%d",&init1);
    scanf("%d",&init2);

    printf("Before Swap  : %d %d\n",init1,init2);

    init1 = init1 * init2;
    init2 = init1 / init2;
    init1 = init1 / init2;

    printf("After Swap   : %d %d\n",init1,init2);
    return 0;
}
