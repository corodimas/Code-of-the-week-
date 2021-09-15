#include<stdio.h>


long long factorial(int x)
{
    if(x==0)
       return 1;
    else
       return x * factorial(x-1);
}
int main()
{
    int number;
    scanf("%ld",&number);
    printf("%lld",factorial(number));
}