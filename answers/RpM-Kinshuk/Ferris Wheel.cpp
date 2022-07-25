#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, x; cin >> n >> x;
    vector <int> vec(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());
    int i=0,j=n-1;
    while(i<=j)
    {
        if(vec[i]+vec[j]<=x)
        {
            count++;
            i++;
            j--;
        }
        else
        {
            count++;
            j--;
        }
    }
    cout << count;
    return 0;
}