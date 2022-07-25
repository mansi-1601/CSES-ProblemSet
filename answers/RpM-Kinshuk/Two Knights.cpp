#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long t, total = 0, excep = 0; cin >> t;

    for(unsigned long long n = 1; n <= t; n ++)
    {
        total = ((n * n) * ((n * n) - 1)) / 2;
        excep = 4 * (n-1) * (n-2);
        cout << total - excep << "\n";
    }
    return 0;
}