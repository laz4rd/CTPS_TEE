#include <stdio.h>


float convertToFarhenheight(float temp) {
    float result = (temp * 9/5) + 32;

    return result;
}

int main() {
    printf("Enter Temperature in Celcius");
    float c;
    scanf("%f",&c);
    float tempInF = convertToFarhenheight(c);
    printf("Temperature in Farenheit is : %.2f",tempInF);
    return 0;
}
