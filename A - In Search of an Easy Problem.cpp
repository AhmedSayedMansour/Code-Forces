#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    bool o=false;
    for(int j=0;j<n;++j){
        cin>>a[j];
        if(a[j]==1)o=true;
    }
    o==true ? cout<<"HARD" : cout<<"EASY";
    cout<<endl;
    return 0;
}
