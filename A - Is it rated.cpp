#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool q=true,w=true,e=false;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(b[i]!=a[i])
            q=false;
    }
    for(int i=0;i<n-1;i++){
        if(b[i]<b[i+1])
            w=false;
    }
    if(!q)cout<<"rated";
    else if(q && !w)cout<<"unrated";
    else if(q && w)cout<<"maybe";
    return 0;
}
