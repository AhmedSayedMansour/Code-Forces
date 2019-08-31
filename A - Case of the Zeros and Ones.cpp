#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int n,a=0,t=0;
	cin>>n>>s;
    for(int i=0;i<s.length();++i){
        if (s[i]=='0')++a;
        else ++t;
    }
    cout<<abs(a-t);
	return 0;
}
