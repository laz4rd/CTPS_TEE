#include <stdio.h>

float calc_bmi(float weight, float height);

float calc_bmi(float weight, float height) {
    float result = weight / (height * height);
    return result;
}

int main() {
    float w,h, bmi;

    printf("Enter Weight and Height");
    scanf("%f %f",&w,&h);

    bmi = calc_bmi(w,h);
    printf("Resultant BMI : %.2f",bmi);
    return 0;
}
