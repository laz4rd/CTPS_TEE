/*
Experiment 9 - Question 7

Apply pointer-based string processing to develop a C program that determines whether a user-entered string is a palindrome and displays the appropriate result.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *start, *end;

    printf("Enter a string: ");
    scanf("%s", str);

    start = str;
    end = str + strlen(str) - 1;

    while (start < end) {
        if (*start != *end) {
            printf("Not a Palindrome");
            return 0;
        }

        start++;
        end--;
    }
    printf("Palindrome");

    return 0;
}
