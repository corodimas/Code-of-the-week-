#include<iostream>

int main()
{
    char A[1000];
    int I=0;
    std::cin >> A;
    for(I;A[I]!=NULL;)
    {
       I++; 
       if(A[I]==NULL)
       {
           std::cout << A[I-1];
       }
    }
}   