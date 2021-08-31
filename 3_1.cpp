#include<iostream>

int FINDMAX(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else if(y>x)
    {
        return y;
    }
    else if(x==y)
    {
        return x;
    }
}

int main()
{
    printf("%d",FINDMAX(10,5));
}