#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll n = 0; cin>>n;
    ll z = (n * (n+1)) / 2;

    if (z&1)
    {
        printf("NO\n"); 
        return 0;
    }

    printf("YES\n");

    z/=2;
    
    vector <ll> v1,v2;

    for (ll i = n; i >= 1; i--)
    {
        if(i <= z)
        {
            v1.push_back(i);
            z -= i;
        }
        else
            v2.push_back(i);
    }

    std::cout<<v1.size()<<std::endl;
    
    for(auto element : v1)
        printf("%lli ",element);

    std::cout<<std::endl<<v2.size()<<std::endl;

    for(auto element : v2)
        printf("%lli ",element);

    return 0;
}



/*#include<bits/stdc++.h>
int main(void)
{
    unsigned long long n; std::cin>>n;
    unsigned long long z=n*(n+1)/2;
    if(z&1)
    {
        printf("NO"); return 0;
    }
    printf("YES\n");
    z/=2;
    //printf("\n\n%llu\n\n",z);
    bool *idx=(bool*)calloc(n+1,sizeof(bool));
    unsigned long long i=n;
    idx[0]=1;
    while(z>=i)
    {
        z-=i;
        idx[i--]=1;
    }
    for(unsigned long long k=0;k<=n;k++)
    {
        if(z==0) break;
        if(idx[k]==0)
        {
            z-=k;
            idx[k]=1;
        }
    }
    z=0;
    printf("%llu\n",n/2);
    for(unsigned long long k=1;k<=n;k++)
    {
        if(idx[k]) {printf("%llu ",k); z+=k;}
    }
    //printf("\n\n%llu\n\n",z);
    //z=0;
    printf("\n%llu\n",n-n/2);
    for(unsigned long long k=1;k<=n;k++) if(!idx[k]) {printf("%llu ",k); z+=k;}
    //printf("\n\n%llu\n\n",z); 
}*/