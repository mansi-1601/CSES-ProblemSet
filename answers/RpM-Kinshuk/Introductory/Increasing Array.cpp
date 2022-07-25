#include<bits/stdc++.h>
int main(void)
{
    long long int n; std::cin>>n;
    long long int arr[n]; for(long int i=0;i<n;i++) std::cin>>arr[i];
    long long int count=0;
    long long int d;
    for(long long int i=1;i<n;i++)
    {
        //std::cout<<"Count at "<<i<<" is: "<<count<<std::endl;
        d=arr[i-1]-arr[i];
        if(d>0)
        {
            //std::cout<<"D at "<<i<<" is: "<<d<<std::endl;
            count+=d;
            arr[i]=arr[i-1];
        }
    }
    std::cout<<count;
    return 0;
}