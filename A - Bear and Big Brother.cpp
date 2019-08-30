#include <iostream>

using namespace std;

int main()
{
    int a,b,ans=0;
    cin>>a>>b;
    while (b>=a)
    {
        b*=2;
        a*=3;
        ans++;
    }
    cout<<ans;
    return 0;
}
