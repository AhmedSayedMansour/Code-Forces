#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,s;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    cin>>s;
    int r[s],p[s];
    for (int i=0;i<s;++i)
    {
        cin>>p[i];
        cin>>r[i];
    }
    for (int i=0;i<s;++i)
    {
        if(p[i]>1)a[p[i]-2]+=(r[i]-1);
        if(p[i]<n)a[p[i]]+=(a[p[i]-1]-r[i]);
        a[p[i]-1]=0;
    }
    for (int i=0;i<n;++i)cout<<a[i]<<endl;
    return 0;
}
