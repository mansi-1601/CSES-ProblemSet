#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    unsigned long long z=1,n=0; cin>>n;
    while(n--) z=(z*2)%mod;
    cout<<z;
    return 0;
}