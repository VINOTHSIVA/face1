#include<stdio.h>
void main()
{
    int x,y,z,i;
    scanf("%d",&x);
    y=x*x;
    for(i=x;i>0;i=i/10)
    {
        z=z+(i%10);
    }
    if(z==x)
    {
        printf("%d is neon number",x);
    }
    else
    {
        printf("%d is not neon number",x);
    }
}
