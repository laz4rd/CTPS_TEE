/*
Experiment 3 - Question 14

Write a C program to accept water consumption in gallons and calculate the total water bill according to the following tariff rates:
- First 50 gallons: Rs. 1.00 per gallon
- Next 100 gallons (51-150): Rs. 1.50 per gallon
- Next 100 gallons (151-250): Rs. 2.00 per gallon
- Above 250 gallons: Rs. 2.50 per gallon

After calculating the bill, add a surcharge of 15% to the total amount and display the final bill.
*/

#include <stdio.h>

int main() {
    float gal, pr;
    printf("Enter water in gallons");
    scanf("%f",&gal);

    if (gal <= 50) {
        pr = 1 * gal;
    } else if (gal > 50 && gal <=150) {
        pr = 50 + ((gal-50)*1.5);
    } else if (gal > 150 && gal <= 250) {
        pr = 50 + (100*1.5) + ((gal-150)*2.0);
    } else if (gal > 250) {
        pr = 50 + (150) + (200) + ((gal-250)*2.5);
    }

    pr = pr + (0.15*pr);

    printf("Final Bill: %f",pr);
    return 0;
}
