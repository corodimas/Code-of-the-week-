#include<stdio.h>

int main()
{
    int n,m,x;
    scanf("%d %d",&n,&m);
    printf("||");
    for(int i=1;i<(((m-1)*n)+m);i++)
    {
        if(x==n)
        {
            printf("||");
            x=0;
        }
        else
        {
            printf("_");
            x++;
        }
    }
}