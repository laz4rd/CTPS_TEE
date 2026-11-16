/*
Experiment 3 - Question 3

Write a C program to find whether a given year is a leap year or not.
*/

#include <stdio.h>

int main() {
    int yr;
    printf("Enter a year\n");

    scanf("%d",&yr);

    if ((yr%4==0 && yr%100!=0) || yr%400==0 ) {
        printf("Year is a Leap Year");
    } else {
        printf("Year is not a Leap Year");
    }
    return 0;
}
