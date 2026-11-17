#include <stdio.h>

struct Student {
    int RL;
    char NM[50];
    float MK;
};

int main() {
    FILE *fp;
    int ch;
    struct Student s;
    while (1) {
        printf("Enter a Choice\n");
        printf("1. Append new Student Records");
        printf("2. Search for Student by RL");

        switch (ch) {
            case 1:
                fp = fopen("Student.txt", "a");
                scanf("%d %s %f",&s.RL,s.NM,&s.MK);
                fprintf(fp, "%d %s %f\n",s.RL,s.NM,s.MK);
                fclose(fp);
                break;
            case 2:
                fp = fopen("Student.txt","r");
                fprintf(fp, "%d %s %f\n",);
        }
    }
}
