#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,b,d,was=0;
    cin>>n>>b>>d;
    int s[n];
    long long sum=0;
    for(int i=0;i<n;++i)
    {
        cin>>s[i];
        if(s[i]<=b)sum+=s[i];
        if(sum>d)
        {
            was++;
            sum=0;
        }
    }
    cout<<was;
    return 0;
}
