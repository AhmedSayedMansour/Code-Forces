#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    bool z=false;
    int a[n],b[n],x[m];
    for(int i=0;i<n;++i)cin>>a[i]>>b[i];
    for(int i=1;i<=m;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(i>=a[j] && i<=b[j])
            {
                z=true;
                break;
            }
        }
        if(z==false)
            {
                x[sum]=i;
                ++sum;
            }
            z=false;
    }
    cout<<sum<<endl;
    for(int i=0;i<sum;++i)cout<<x[i]<<' ';
    return 0;
}
