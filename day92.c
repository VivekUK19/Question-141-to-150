#include <stdio.h>
/*Q142: Store details of 5 students in an array of structures and print all.
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details       */
struct Student
{   char Name[50];
    int Roll;
    int Marks;
};

int main(){
    struct Student details[5];
    for (int i = 0; i < 5; i++)
    {   printf("Enter details of Student %d\n",i+1);
        printf("Name:");
        scanf("%s", details[i].Name);
        printf("Roll:");
        scanf("%d", &details[i].Roll);
        printf("Marks:");
        scanf("%d", &details[i].Marks);
    }
    printf("student details :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s | Roll: %d | Marks: %d",details[i].Name,details[i].Roll,details[i].Marks);
    }
    
    return 0;
}