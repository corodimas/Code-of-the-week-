#include<iostream>
#include<string.h>


int main()
{
    char A[1000];
    std::cin >> A;
    int I = strlen(A);
    std::cout << A[I-1];
}