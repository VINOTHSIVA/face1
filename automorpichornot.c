#include <stdio.h>
int main()
{
    int n,x,y=1,z,temp;
    scanf("%d",&n);
    temp=n;
    x=n*n;
    while(n!=0)
    {
        y=y*10;
        n=n/10;
    }
    z=x%y;
    if(z==temp)
    {
        printf("auto morphic");
    }
    else
    {
        printf("not auto morphic");
    }
    return 0;
}

