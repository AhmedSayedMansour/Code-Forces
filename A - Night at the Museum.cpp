#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    int sum=0;
    cin>>s;
    s="a"+s;
    for (int i=0;i<s.length()-1;++i)
    {
        int a=abs((int)s[i]-(int)s[i+1]);
        if (a<=26-a)sum+=a;
        else sum+=26-a;
    }
    cout<<sum;
    return 0;
}
