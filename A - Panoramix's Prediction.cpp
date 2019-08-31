#include <bits/stdc++.h>

using namespace std;

bool isprime(int n){
    int m=n/2;
    for (int i=2;i<=m;++i){
        if (n%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=n+1 ; i < m;++i){
        if(isprime(i)){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(isprime(m)){
        cout<<"YES"<<endl;
    }
    else    cout<<"NO"<<endl;
    return 0;
}

