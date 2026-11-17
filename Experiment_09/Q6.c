/*
Experiment 9 - Question 6

Construct a function custom_strlen() that uses a character pointer to traverse a null-terminated string and determine its length without using the standard library function strlen(). Display the computed string length.
*/
#include <stdio.h>

int custom_strlen(char *ptr) {
    int count=0;
    while (*ptr!='\0') {
        ptr++;
        count++;
    }
    return count;
}

int main() {
    char str[50];
    printf("Enter a string\n");
    fgets(str, sizeof(str), stdin);
    int len = custom_strlen(str);
    printf("Length of String: %d",len);
    return 0;

}
