#include <bits/stdc++.h>
using namespace std;
 
void GreyCode(int n)
{
     // power of 2
    for (int i = 0; i < (1 << n); i++)
    {
        int val = (i ^ (i >> 1));
        
        //bitset
        bitset<32> r(val);
         
        //To string
        string s = r.to_string();
        cout << s.substr(32 - n) << "\n";
    }
}

int main()
{
    int n;
    cin>>n;
    GreyCode(n);
    return 0;
}