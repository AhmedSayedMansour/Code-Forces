#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
 
using namespace std;
int main()
{
    int n,num,mini;
    cin>>n;
    vector<int> vec1,vec2,vec3;
    for(int i=0;i<n;++i)
    {
        cin>>num;
        if(num==1)vec1.push_back(i);
        else if(num==2)vec2.push_back(i);
        else vec3.push_back(i);
    }
    mini=min(vec1.size(),min(vec2.size(),vec3.size()));
    cout<<mini<<endl;
    for(int i=0;i<mini;++i)cout<<++vec1[i]<<' '<<++vec2[i]<<' '<<++vec3[i]<<endl;
    return 0;
}
