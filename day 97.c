//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp;
    char choice;
    fp = fopen("employee.dat", "wb"); 
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("--- Enter Employee Data ---\n");
    do {
        printf("Enter Employee ID: ");
        scanf("%d", &emp.id);
        printf("Enter Employee Name: ");
        scanf("%s", emp.name); 
        printf("Enter Employee Salary: ");
        scanf("%f", &emp.salary);
        fwrite(&emp, sizeof(struct Employee), 1, fp);

        printf("Do you want to add another employee? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("Employee data written to employee.dat successfully.\n\n");
    fp = fopen("employee.dat", "rb"); // Open file in read binary mode
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("--- Employee Data Read from File ---\n");
    printf("ID\tName\tSalary\n");
    while (fread(&emp, sizeof(struct Employee), 1, fp) == 1) {
        printf("%d\t%s\t%.2f\n", emp.id, emp.name, emp.salary);
    }

    fclose(fp);
    return 0;
}