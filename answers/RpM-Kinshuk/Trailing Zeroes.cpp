#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n = 0;
    cin>>n;
    unsigned int z = 0;
    while (n != 0)
    {
        z += (n/5);
        n /= 5;
    }
    cout<<z;
    return 0;
}