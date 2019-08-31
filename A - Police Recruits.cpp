#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,pol=0,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)
    {
        if(pol==0 && a[i]==-1)
            sum+=1;
        else pol+=a[i];
    }
    cout<<sum;
    return 0;
}
