#include <stdio.h>
#include <string.h> 
struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s1;
    struct Student *studentPtr;
    studentPtr = &s1;
    strcpy(studentPtr->name, "John");
    studentPtr->roll = 106;
    studentPtr->marks = 91;
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", 
           studentPtr->name, studentPtr->roll, studentPtr->marks);

    return 0;
}