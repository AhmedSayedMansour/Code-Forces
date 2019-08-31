#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[1000001],p;
    cin>>n;
    int b=n;
    for (int i=0; i<n; i++){
        cin>>p;
        a[p]=1;
        while(a[b]==1){
            cout<<b<<" ";
            b--;
        }
        cout<<endl;
    }
    return 0;
}
