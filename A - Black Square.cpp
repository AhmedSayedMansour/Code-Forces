#include <bits/stdc++.h>

using namespace std;
int b[4];
int main()
{
    int a[4],sum=0;
    for (int i=0;i<4;++i)cin>>a[i];
    string x;
    cin>>x;
    for(int i=0;i<x.length();i++)
    {
        if(x[i]=='1')
            b[0]++;
        if(x[i]=='2')
            b[1]++;
        if(x[i]=='3')
            b[2]++;
        if(x[i]=='4')
            b[3]++;
    }
    for (int i=0;i<4;++i)
        sum+=(a[i]*b[i]);
    cout<<sum;
    return 0;
}
