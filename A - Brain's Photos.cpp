#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char a[n][m];
    bool c=false;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>a[i][j];
            if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y'){
                c=true;
            }
        }
    }
    c==true ? cout<<"#Color" : cout<<"#Black&White" ;
	return 0;
}
