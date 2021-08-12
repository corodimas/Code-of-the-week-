#include <iostream>

int main()
{
    int A,B,C,D,count ; 
    std::cin >> A >> B >> C >> D;
    if(A%2==0)
    {
        count += 1; 
    }
    if(B%2==0)
    {
        count += 1;
    }
    if(C%2==0)
    {
        count += 1;
    }
    if(D%2==0)
    {
        count += 1;
    }
    std::cout << count;

}   