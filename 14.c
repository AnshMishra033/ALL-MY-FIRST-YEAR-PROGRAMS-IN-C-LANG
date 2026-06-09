#include <stdio.h>
int main()
{
    int sum =0;
    int i=1;
    do
    {
        
        sum+=i;
        i++;
    }while(i<11);
    printf("sum is %d",sum);
    return 0;
}