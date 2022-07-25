#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    unsigned int n = 0; cin >> n;

    if(n==2||n==3)
    {
        printf("NO SOLUTION");
        return 0;
    }
    if(n==1)
    {
        printf("%d",1);
        return 0;
    }

    vector <unsigned int> v;

    for(unsigned int i=2;i<=n;i+=2)
        v.push_back(i);

    for(unsigned int i=1;i<=n;i+=2)
        v.push_back(i);

    for(auto vec: v)
        printf("%li ",vec);
        
    return 0;
}