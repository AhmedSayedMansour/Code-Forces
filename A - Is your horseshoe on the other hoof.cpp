#include <bits/stdc++.h>

using namespace std;
int main()
{
    set<int> ans;
    int a;
    for (int i=0;i<4;++i)
    {
        cin>>a;
        ans.insert(a);
    }
    cout<<(4-ans.size());
    return 0;
}
