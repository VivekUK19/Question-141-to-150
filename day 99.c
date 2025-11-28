//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *sPtr;
    sPtr = (struct Student *) malloc(sizeof(struct Student));
    if (sPtr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    strcpy(sPtr->name, "Tina");
    sPtr->roll = 105;
    sPtr->marks = 88.0;
    printf("Name: %s | Roll: %d | Marks: %.0f\n", sPtr->name, sPtr->roll, sPtr->marks);
    free(sPtr);
    sPtr = NULL;

    return 0; 
}