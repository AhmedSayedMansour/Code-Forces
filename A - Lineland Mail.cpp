#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,mn,mx,f;
    cin>>n;
    int a[n];
    for (int i=0 ; i<n; ++i){
        cin>>a[i];
    }
    f=a[0];
    for(int i=0;i<n;++i)a[i]=a[i]+abs(f);
    cout<<a[1]-a[0]<<' '<<a[n-1]-a[0]<<endl;
    for (int i=1 ; i<n; ++i)
    {
        mn=(a[i]-a[i-1]<=a[i+1]-a[i]) ? a[i]-a[i-1]:a[i+1]-a[i];
        mx=(a[n-1]-a[i]>=a[i]) ? a[n-1]-a[i]:a[i];
        cout<<mn<<' '<<mx<<endl;
    }
    return 0;
}
