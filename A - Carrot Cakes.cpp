#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,t,k,d,fc,sc,z,u;
    bool a=true;
    cin>>n>>t>>k>>d;
    if(n%k==0)u=n/k;
    else u=(n/k)+1;
    fc=u*t;
    if(d%t==0)z=d/t;
    else z=(d/t)+1;
    z=u-z;
    if(z<=0)
    {
        cout << "NO";
        return 0;
    }
    if(z%2==0)sc=((z/2)*t)+d;
    else sc=(((z/2)+1)*t)+d;
    if(fc>sc)cout << "YES";
    else cout << "NO";
    return 0;
}
