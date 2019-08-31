#include <bits/stdc++.h>
using namespace std;
string s="qwertyuiopasdfghjkl;zxcvbnm,./";
int main()
{
    char c;
    cin>>c;
    string s2;
    cin>>s2;
    for (int i=0;i<s2.length();++i){
        cout<<s[s.find(s2[i])+(c=='L')-(c=='R' )];
    }
    return 0;
}
