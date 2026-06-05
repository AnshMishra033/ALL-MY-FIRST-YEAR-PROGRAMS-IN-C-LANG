#include <stdio.h>
int main()
{
    int a;
    printf("Enter age\n");
    scanf("%d",&a);
    if(a>60)
    {
        printf("You can drive and you are a senior citizen");
    }
    else if(a>40)
    {
        printf("You can drive and you are an elder");
    }
    else if(a>18)
    {
        printf("You can drive");
    }
    else
    {
        printf("You cannot drive");
    }
    return 0;
}
    