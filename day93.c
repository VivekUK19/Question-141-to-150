#include <stdio.h>
/*Q143: Find and print the student with the highest marks.
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)    */
struct Student
{   char Name[50];
    int Roll;
    int Marks;
};

int main(){
    int n;
    printf("enter the number of total students :\n");
    scanf("%d",&n);
    struct Student details[n];
    for (int i = 0; i < n; i++)
    {   printf("Enter details of Student %d\n",i+1);
        printf("Name: Roll: Marks: \n");
        scanf("%s   %d  %d", details[i].Name,&details[i].Roll,&details[i].Marks);
    }
    int Highest_marks = 0;
    for(int i = 1; i < n; i++) {
        if(details[i].Marks > details[Highest_marks].Marks) {
            Highest_marks = i;
        }
    }
    printf("\nTopper: %s (Marks: %d)\n", details[Highest_marks].Name, details[Highest_marks].Marks);



    return 0;
}