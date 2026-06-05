#include <stdio.h>
int main()
{
    int one;
    printf("Enter rs\n");
    scanf("%d",&one);
   
    if(one<=250000)
    {
        printf("no tax");
    }
    else if(one>250000 && one<=500000)
    {
        printf("(5%) tax");
    }
    else if(one>500000 && one<=1000000)
    {
        printf("(20%) tax");
    }
    else
    {
        printf("(30%) tax");
    }
    return 0;
}
    