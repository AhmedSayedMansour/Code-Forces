#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n*2];
    for(int i=0;i<n*2;++i)cin>>a[i];
    for(int i=0;i<n*2;i+=2)
    {
        for(int j=1;j<n*2;j+=2)
        {
            if(a[i]==a[j])
                sum+=1;
        }
    }
    cout<<sum;
    return 0;
}
