/*
Experiment 10 - Question 1

Develop a menu-driven C program using switch-case statements to perform file handling operations on a text file named product.txt. The program should write, read, append, search, and delete product records containing Product ID, Price, and Quantity using the fprintf() and fscanf() functions, and display the result of each operation.
*/

#include <stdio.h>
#define FILENAME "Q1.txt"

struct product {
    long ID;
    float price;
    int QTY;
};

int main() {
    FILE *fp;
    fp = fopen(FILENAME, "w");

    struct product p;
    int choice, searchID, found_flag;
    while (1) {
        printf("Main Menu\n");
        printf("1. Write to File\n");
        printf("2. Read from File\n");
        printf("3. Append to File\n");
        printf("4. Search Product Records\n");
        printf("5. Delete Product Records\n");

        scanf("%d",&choice);

        switch (choice) {
            case 1:
                fp = fopen(FILENAME, "w");
                printf("Writing to file:\n");
                printf("Enter Product ID, Price, Quantity\n");
                scanf("%ld %f %d",&p.ID,&p.price,&p.QTY);
                fprintf(fp, "%ld %.2f %d\n",p.ID,p.price,p.QTY);
                printf("Written Successfully");
                fclose(fp);
                break;
            case 2:
                fp = fopen(FILENAME, "r");

                while (fscanf(fp , "%ld %f %d",&p.ID,&p.price,&p.QTY) == 3) {
                    printf("%ld\t%.2f\t%2d",p.ID,p.price,p.QTY);
                }
                fclose(fp);
                break;
            case 3:
                fp = fopen(FILENAME, "a");


        }
    }
    return 0;
}
