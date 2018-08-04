#include<stdio.h>
void main()
{
    int x,s=0,i,c=0,rem,x1;
    scanf("%d",&x1);
    for(i=1;i<=x1;i++)
    {
        s=0;
        x=i*i;
        while(x!=0)
         {
           rem=x%10;
           s=s+rem;
           x=x/10;
          }
    if(i==s)
      {
        printf("%d ",i);
        c++;
      }
    }
    printf("%d ",c);
}
