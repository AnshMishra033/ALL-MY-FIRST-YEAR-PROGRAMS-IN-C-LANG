#include <stdio.h>
int main()
{
    int a;
    printf("Enter principal\n");
    scanf("%d" , &a);
    int b;
    scanf("%d" ,&b);
    printf("Enter rate of interest \n");
    int c;
    scanf("%d" ,&c);
    printf("Enter time period \n");
    float d=(a*b*c)/100;
    printf("Simple Interest is %f",d);
    return 0;
}