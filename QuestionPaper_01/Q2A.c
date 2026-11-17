#include <stdio.h>

int main() {
    int a[10];

    int i;
    printf("Enter 10 Elements");
    for (i=0; i<10; i++) {
        scanf("%d",&a[i]);
    }

    for (i=0; i<10; i++) {
        for (int j = 0; j<9-i; j++) {
            if (a[j]>a[j+1]) {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i=0; i<10; i++) {
        printf("%d",a[i]);
    }
}
