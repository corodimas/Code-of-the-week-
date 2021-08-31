#include<iostream>

int FINDMAX(int x,int y)
{
    int max = (x+y+((x-y)*(((x-y)>0)-((x-y<0)))))/2;
    return max;
}

int main()
{
    printf("%d",FINDMAX(50,50));
}