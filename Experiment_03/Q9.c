/*
Experiment 3 - Question 9

Write a C program that displays a menu to calculate the area of different geometric shapes using a switch-case statement. The menu should include Triangle, Square, Circle, Rectangle, and Regular Polygon. Accept the required dimensions from the user and display the calculated area of the selected shape.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.1416
int main() {
    int ch;
    float area;
    while (1) {
        printf("Enter choice:\n");
        printf("1. Triangle\n");
        printf("2. Sqaure\n");
        printf("3. Circle\n");
        printf("4. Rectangle\n");
        printf("5. Regular Poly\n");
        printf("6. Exit");

        scanf("%d",&ch);

        switch (ch) {
            case 1: printf("Enter base");
                float b,h;
                scanf("%f",&b);
                printf("Enter height");
                scanf("%f",&h);
                area = 0.5 * b * h;
                printf("Area of Triangle : %f",area);
                break;
            case 2: printf("Enter side of Sq");
                float s;
                scanf("%f",&s);
                area = s*s;
                printf("Area of Square : %f",area);
                break;
            case 3: printf("Enter radius of circle");
                float r;
                scanf("%f",&r);
                area = PI * r * r;
                printf("Area of Circle : %f",area);
                break;
            case 4: printf("Enter sides of Rectangle");
                float br,ln;
                scanf("%f %f",&br,&ln);
                area = ln * br;
                printf("Area of Rectangle : %f",area);
                break;
            case 5: printf("Enter number of sides");
                float n;
                scanf("%f",&n);
                float sid;
                printf("Enter the length of side");
                scanf("%f",&sid);
                area = (n * sid * sid) / (4 * tan(PI/n));
                printf("Area of Polygon : %f",area);
                break;
            case 6: exit(0);
            default: printf("Invalid Choice, Pick Again");
                break;
        }
    }

    return 0;
}
