#include<stdio.h>
#include<iostream>
using namespace std;
const int MAX=1e5+10;
bool vis[MAX][25];
long long arr[MAX];
long long b[25];
int main()
{
    int c=1;
    for(int i=1;i<=24;i++)
    {
        b[i]=c;
        c*=2;
    }
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            long long cnt=arr[i];
            for(int j=1;j<=22;j++)
            {
                vis[i][j]=(cnt&1);
                cnt>>=1;
            }
        }
        long long ans=0;
        for(int i=1;i<=22;i++)
        {
            long long len=0;
            for(int j=0;j<n;j++)
            {
                if(vis[j][i])len++;
                else
                {
                    ans+=(len*(len+1))/2*b[i];
                    len=0;
                }
            }
            ans+=(len*(len+1))/2*b[i];
        }
        cout<<ans<<endl;
    }
}
