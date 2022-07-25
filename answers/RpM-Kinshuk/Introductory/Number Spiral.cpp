#include<bits/stdc++.h>

using namespace std;

int count(int n)
{
    if(n==1) return 1;
    return count(n-1)+(n-1)*2;
}

int main()
{
    long long t; cin>>t;
    while(t--)
    {
        long long x, y; cin >> y >> x;
        if (x > y)
        {
            long long z = (x * x) - x + 1;
            if (x & 1)
                cout << z + (x - y) << endl;
            else
                cout<< z - (x - y) << endl;
        }
        else
        {
            long long z = (y * y) - y + 1;
            if (y & 1)
                cout << z - (y - x) << endl;
            else
                cout << z + (y - x) << endl;
        }
    }
    return 0;
}