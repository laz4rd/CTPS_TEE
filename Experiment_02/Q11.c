/*
Experiment 2 - Question 11

Write a C program to calculate the area of a triangle using Heron's formula. Accept the lengths of the three sides as input.
*/

#include <stdio.h>
#include <math.h>

int main() {

    printf("Enter three sides of triangle");

    float a,b,c;

    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    float s = (a+b+c)/2.0;
    float pre = s*(s-a)*(s-b)*(s-c);
    float heron = sqrt(pre);

    printf("Area of triangle : %f",heron);

    return 0;
}
