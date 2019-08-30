#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main()
{
    string a;
    int ans=0;
    cin>>a;
    sort(a.begin(),a.end());
    for(int i=0;i<a.length();++i)
    {
        if(a[i]!=a[i-1])
            ++ans;
    }
    if (ans%2==0)     cout<<"CHAT WITH HER!";
    else    cout<<"IGNORE HIM!";
    return 0;
}
