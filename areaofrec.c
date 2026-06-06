#include <stdio.h>
int main()
{
    int a;
    printf("Enter length\n");
    scanf("%d" , &a);
    int b;
    printf("Enter breadth\n ");
    scanf("%d" , &b);
    int c;
    c=a*b;
    printf("The area of rectangle is %d",c);
    return 0;
}