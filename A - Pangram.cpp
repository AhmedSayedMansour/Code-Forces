#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n<26){
        cout<<"NO";
        return 0;
    }
    int a[26]={ };
    for (int i=0;i<n;++i){
        s[i]=tolower(s[i]);
        a[(int)s[i]-97]=1;
    }
    for (int i=0;i<26;++i){
        if (a[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
