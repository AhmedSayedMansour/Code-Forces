#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main()
{
    char a[100],b[100];
    cin>>a>>b;
    for (int i=0;i<100;++i)
    {
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }
    cout<<strcmp(a,b);
    return 0;
}
