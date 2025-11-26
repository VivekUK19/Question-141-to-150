#include <stdio.h>
/*Q144: Write a function that accepts a structure as parameter and prints its members.
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92      */
struct Student
{   char Name[50];
    int Roll;
    int Marks;
};
void print(struct Student s){
    printf("Name: %s | Roll: %d | Marks: %d",s.Name,s.Roll,s.Marks);
};
int main(){
    
    struct Student s1;
    printf("Enter student details (Name Roll Marks):\n");
    scanf("%s %d %d", s1.Name, &s1.Roll, &s1.Marks);

    print(s1);
    return 0;
}