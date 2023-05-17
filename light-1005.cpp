#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t,l=0;
    cin>>t;
    while(t--)
    {
        int long long ans;
        int n,k;
        cin>>n>>k;
        ans=0;
        if(n>=k)
        {
            ans=1;
            for(int i=1; i<=k; i++)
            {
                ans=(ans*n*n)/i;
                n--;
            }
        }
        printf("Case %d: %lld\n",++l,ans);
    }
    return 0;
}
