#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(void)
{
    int n; cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++) cin>>arr[i];
    std::sort(arr,arr+n-1);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        {
            printf("%d",i+1);
            break;
        }
    }
    return 0;
}