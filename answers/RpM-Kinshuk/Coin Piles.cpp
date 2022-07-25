#include<iostream>
int main()
{
    int t; if (scanf("%u",&t));
    while(t--)
    {
        unsigned int x=0,y=0;
        if (scanf("%u %u",&x,&y));
        if (x > y) {x=x^y; y=x^y; x=x^y;}
        if (x*2 < y)
        {
            printf("NO\n");
            continue;
        }
        x%=3; y%=3;
         if (x > y) {x=x^y; y=x^y; x=x^y;}
        if (x == 0 && y == 0) printf("YES\n");
        else if (x == 1 && y == 2) printf("YES\n");
        else if (x == 2 && y == 1) printf("YES\n");
        else printf("NO\n"); 
    }
    return 0;
}


/*#include<iostream>
int main()
{
    int t; if (scanf("%u",&t));
    while(t--)
    {
        unsigned int x=0,y=0;
        if (scanf("%u %u",&x,&y));
        if (((x/2) + 2*(x&1) == y) || ((y/2) + 2*(y&1) == x)) printf("YES\n");
        else printf("NO\n"); 
    }
    return 0;
}*/