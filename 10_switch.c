#include <stdio.h>
int main()
{
    int a;
    printf("Enter no.\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("u entered 1");
        break;
    
    
        case 2:
        printf("u entered 2");
        break;
    
    
        case 3:
        printf("u entered 3");
        break;
    
    
        case 4:
        printf("u entered 4");
        break;
    
    
        default:
        printf("Nothing matched");
    }
}