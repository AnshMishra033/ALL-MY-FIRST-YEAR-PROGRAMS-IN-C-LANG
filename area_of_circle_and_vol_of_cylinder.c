#include <stdio.h>
int main()
{
    int a;
    printf("Enter radius\n");
    scanf("%d" , &a);
    float c=3.14*a*a;
     printf("The area of circle is %f\n",c);
    int b;
    printf("Enter height\n ");
    scanf("%d" , &b);
    float d;
    d=3.14*a*a*b;
    printf("The volume of cylinder is %f",d);
    return 0;
}