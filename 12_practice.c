#include <stdio.h>
int main()
{
    int one;
    printf("Enter subject one\n");
    scanf("%d",&one);
    int two;
    printf("Enter subject two\n");
    scanf("%d",&two);
    int three;
    printf("Enter subject three\n");
    scanf("%d",&three);
    int four = (one+two+three)/3;
    if(one>=33 && two>=33 && three>=33 && four>=40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
    