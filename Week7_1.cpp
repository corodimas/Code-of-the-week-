#include<iostream>

int main()
{
    int n;
    printf("How many people you want them to shake their hand: ");
    scanf("%d",&n);
    printf("They need to shake hand %d times",(n*(n-1))/2);
}