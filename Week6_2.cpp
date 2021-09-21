#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int j =0;j<m;j++)
    {
        printf("||");
        for(int i=0;i<n&&j!=m-1;i++)
        {
            printf("_");
        }
    }
}