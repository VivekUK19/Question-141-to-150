#include <stdio.h>
/*Q146: Create Employee structure with nested Date structure for joining date and print details.
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020       */
struct company
{
    char Employee[20];
    int ID;
    int day,month,year;
};
void input(struct company *s){
    printf("Employee | ID:  | Joining Date:(day,month,year) ");
    scanf(" %s  %d  %d %d %d",&s->Employee,&s->ID,&s->day,&s->month,&s->year);
};
void print(struct company s){
    printf("Name: %s | Id: %d | Joining date: %d / %d / %d",s.Employee,s.ID,s.day,s.month,s.year);
};
int main(){
    struct company s1;
    input(&s1);
    print(s1);
    return 0;
}