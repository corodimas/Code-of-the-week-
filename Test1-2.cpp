#include <iostream>

int main()
{
    int A[4],count;
    std::cin >> A[0] >> A[1] >> A[2] >> A[3] ; 
    for(int I=3;I>=0;I--)
        {
            if(A[I]%2==0)
            {    
                count +=1;
            }    
        }
    std::cout << count;

}   