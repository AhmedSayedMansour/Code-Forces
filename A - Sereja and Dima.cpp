#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,ser=0,dim=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    for(int j=0,k=n-1,i=0;i<n;++i)
    {
            if (a[j]>a[k])
            {
                if (i%2==0)ser+=a[j];
                else dim+=a[j];
                ++j;
            }
            else
            {
                if (i%2==0)ser+=a[k];
                else dim+=a[k];
                --k;
            }
    }
    cout<<ser<<' '<<dim;
    return 0;
}
