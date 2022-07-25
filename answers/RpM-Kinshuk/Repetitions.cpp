#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(void)
{
    string s; cin>>s;
    int curr=1,max=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            curr++;
        }
        else curr=1;
        max=(max>curr)?max:curr;
    }
    cout<<max;
    return 0;
}