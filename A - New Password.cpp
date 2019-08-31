#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;
int main()
{
    int n,k,p=0,ch=97;
    cin>>n>>k;
    string s;
    for(int i=0;i<n;++i)
    {
        s+=(char)ch;
        if (ch-97!=k-1)++ch;
        else ch=97;
    }
    cout<<s;
    return 0;
}
