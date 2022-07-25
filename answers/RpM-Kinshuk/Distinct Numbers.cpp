#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    long long a=0;
    //int count = 0;
    //unordered_map<long long,bool> map;
    //set <long long> distinct;
    vector <long long> vec(n);
    for(int i = 0; i < n ; i++)
    {
        //cin>>a;
        cin>>vec[i];
        //map[a]=1;
        //distinct.insert(a);
    }
    sort(vec.begin(),vec.end());
    int dis = 0;
    for(int i = 0; i < n; i++)
    {
        if (i == 0 || vec[i] != vec[i-1]) dis++;
    }
    cout<<dis;
    //cout<<distinct.size();
    return 0;
}