#include <stdio.h>

int main() {
    float c,s;

    printf("Enter Cost and Selling Price\n");
    scanf("%f %f",&c,&s);

    if (c<=0 || s<=0) {
        printf("Invalid Input\n");
        return 1;
    }

    if (s-c > 0) {
        printf("Profit\n");
    } else if (s-c < 0) {
        printf("Loss");
    } else {
        printf("Neither");
    }
    return 0;
}
