#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y;
    cin>>n>>x;
    bool t[n+1];
    memset(t,false ,n+1);
    int a[x];
    for(int i=0;i<x;++i){
        cin>>a[i];
        t[a[i]]=true;
    }
    cin>>y;
    int b[y];
    for(int i=0;i<y;++i){
        cin>>b[i];
        t[b[i]]=true;
    }
    for(int i=1;i<n+1;++i){
        if(t[i]==false){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}
