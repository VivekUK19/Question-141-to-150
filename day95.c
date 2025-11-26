#include <stdio.h>
/*Q145: Return a structure containing top student's details from a function.
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96      */
struct Student
{   char Name[50];
    int Roll;
    int Marks;
};
struct Student topper(struct Student details[],int n)
{   int topper=0;
    for (int i = 1; i < n; i++)
    {
        if (details[i].Marks > details[topper].Marks) {
            topper = i;
        }
    }
    return details[topper]; 
};

int main(){
    int n;
    printf("enter the number of total students :\n");
    scanf("%d",&n);
    struct Student details[n];
    printf("Enter the details as (Name: Roll: Marks: )\n");
    for (int i = 0; i < n; i++)
    {   printf("Enter details of Student %d\n",i+1);
        scanf("%s   %d  %d", details[i].Name,&details[i].Roll,&details[i].Marks);
    }

    struct Student top = topper(details, n);

    
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n", top.Name, top.Roll, top.Marks);


    return 0;
}