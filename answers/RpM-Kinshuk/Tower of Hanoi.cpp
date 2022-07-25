#include<bits/stdc++.h>

using namespace std;

void towerofHanoi(vector <pair<int,int>> &v, int n, int src, int dest, int aux)
{
    if(n == 0) return;

    towerofHanoi(v,n-1,src,aux,dest);

    v.push_back({src,dest});

    towerofHanoi(v,n-1,aux,dest,src);
}
int main(void)
{
    int n; cin >> n;

    vector <pair<int,int>> v;

    towerofHanoi(v, n, 1, 3, 2);

    cout << v.size() << endl;
    
    for(auto k : v)
        cout << k.first << " " << k.second << endl;

    return 0;
}