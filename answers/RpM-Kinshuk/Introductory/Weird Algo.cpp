#include<bits/stdc++.h>


//This problem is basically a problem on collatz conjecture
void collatz(unsigned long long int n)
{
    if(n==1)
    {
        return;
    }
    if(n&1)
    {
        std::cout<<3*n+1<<" ";
        collatz(3*n+1);
    }
    else
    {
        std::cout<<n/2<<" ";
        collatz(n/2);
    }
}
int main()
{
    unsigned long long int n; std::cin>>n;
    std::cout<<n<<" ";
    collatz(n);
    return 0;
}