#include <stdio.h>
int main()
{ 
    int n;int i=0;
    printf("Enter any no.\n");
    scanf("%d",&n);
    do
    {
        printf("%d\n ",(i+1));
        i++;
    }while(i<n);
    return 0;
}