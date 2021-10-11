#include <iostream>


int main()
{
    int  n,x,sum;
    printf("How many people you want them to exchange thier card: ");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            sum +=1;
        }
    }
    x=sum*2;
    printf("You need %d cards",x);

}