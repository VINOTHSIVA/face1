#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,j,dec,b[100];
    dec=atoi(argv[1]);
    i=0;
    while(dec>0)
    {
        b[i]=dec%2;
        i++;
        dec=dec/2;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",b[j]);
    }
    return 0;
}
