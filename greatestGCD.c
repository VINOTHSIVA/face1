#include<stdio.h>
void main()
{
    int a,b,small,i;
    scanf("%d%d",&a,&b);
    small=a>b?a:b;
    for(i=small;i>1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}
