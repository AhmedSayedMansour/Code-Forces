#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,m,sum=1;
    cin>>n>>m;
    if(n%10==m)
    {
        cout<<sum;
        return 0;
    }
    while((n*sum)%10!=m && (n*sum)%10!=0)
    {
        sum+=1;
    }
    cout<<sum;
    return 0;
}
