#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,temp=0,mys=0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;++i){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    for (int i=n-1;i>=0;--i){
        mys+=a[i];
        ++temp;
        sum-=a[i];
        if(mys>sum){
            cout<<temp;
            break;
        }
    }
    return 0;
}
