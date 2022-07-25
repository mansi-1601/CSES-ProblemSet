#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n = 0, m = 0, k = 0;
    cin >> n >> m >> k;
    vector <long int> v1(n),v2(m);
    for(int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    sort(v1.begin(),v1.end());
    for(int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    sort(v2.begin(),v2.end());

    //cout<< "First vec: ";
    //for(auto e: v1) cout<<e<<" ";
    //cout<<"\nSecond vec: ";
    //for(auto e: v2) cout<<e<<" ";
    //cout<<"\n";
    int i=0,j=0,cnt = 0;
    while (i<n&&j<m)
    {
        if(abs(v1[i]-v2[j])<=k)
        {
            cnt++;
            i++;
            j++;
        }
        else if(v1[i]-v2[j]>0)
            j++;
        else
            i++;
    }
    cout << cnt;
    return 0;
}