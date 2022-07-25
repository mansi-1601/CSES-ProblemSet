#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin>>s;
    sort(s.begin(),s.end());
    int n = s.length();
    vector <int> cnt(26,0);
    for (int i = 0; i < n; i++) cnt[s[i]-'A']++;
    int z = 0, oddcnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] % 2)
        { 
            z = i;
            oddcnt++;
        }
    }
    if (oddcnt > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    deque <char> q;

    if (cnt[z])
        while (cnt[z]--) 
        {
            q.push_back(z+'A');
        }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > 0)
        while(cnt[i]--)
        {
            if (cnt[i] & 1) q.push_back(i + 'A');
            else q.push_front(i + 'A');
        }
    }

    for (auto e: q)
        cout<<e;

    return 0;
}