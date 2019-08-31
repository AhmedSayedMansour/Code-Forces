#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
 
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int d2[n],dod=0;
    long long sum=x;
    char d1[n];
    for (int i=0;i<n;++i)
    {
        cin>>d1[i]>>d2[i];
        if(d1[i]=='+')sum+=d2[i];
        else
        {
            if (sum >=d2[i])sum-=d2[i];
            else dod+=1;
        }
    }
    cout<<sum<<' '<<dod;
    return 0;
}
 
