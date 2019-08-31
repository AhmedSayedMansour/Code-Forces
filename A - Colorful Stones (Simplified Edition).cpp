#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s,t;
    int count=0;
    cin>>s>>t;
    for(int i=0;i<t.length();++i)
    {
        if (t[i]==s[count])
            ++count;
    }
    cout<<++count;
    return 0;
}
