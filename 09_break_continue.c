#include <stdio.h>
int main()
{
    int n=15;
    for(int i=1;i<n;i++)
    {
        if(i==5)
        {
            //break; //exit the loop now
            continue; //skip this iteration now
        }
        printf("The value of i is %d\n ",i);
    }
    printf("for loop is done");
    return 0;
}