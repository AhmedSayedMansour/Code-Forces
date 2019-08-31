#include <bits/stdc++.h>
#include <iostream>
using namespace std;

char index(string a, int i){
    return a[i];
}

int main() {
    int n;
    cin>>n;
    string s[n];
    char a,b;
    for(int i=0 ; i<n ; i++){
        cin>>s[i];
    }
    bool valid = true;
    a=index(s[0],0);
    b=index(s[0],1);
    if (a==b){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0 ; i<n/2+1 ; i++){
        if(index(s[i],i)!=a || index(s[n-i-1],i)!=a){
            valid = 0;
            break;
        }
        for(int j=0 ; j<n ; j++){
            if (index(s[i],j)!=b && (j!=i && j!=n-i-1)){
                valid=0;
                break;
            }
        }
    }
    for(int i=0 ; i<n/2 ; i++){
        if(s[i]!=s[n-i-1]){
            valid=0;
            break;
        }
    }
    if (valid)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
	return 0;
}
