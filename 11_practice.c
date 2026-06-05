#include <stdio.h>
int main()
{
    char grade;
    int marks;
    printf("Enter marks\n");
    scanf("%d",&marks);
    if(marks<=100 && marks>90)
    {
        grade = 'A';
    }
    else if(marks<=90 && marks>80)
    {
        grade = 'B';
    }
    else
    {
        grade = 'C';
    }
    return 0;
}
   