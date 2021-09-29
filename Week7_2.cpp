#include<iostream>

int main()
{
    int n,sum;
    printf("How many people you want them to shake their hand: ");
    scanf("%d",&n);

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            sum +=1;
        }
    }
    printf("%d",sum);
}