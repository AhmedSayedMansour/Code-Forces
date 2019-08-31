#include <bits/stdc++.h>
#define ms(a,v) memset(a,v,sizeof a)
using namespace std;


int main()
{
    string n;
    int sum=0;
    cin>>n;
    for (int i=0;i<n.length();++i){
        if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u' || n[i]=='1'
           || n[i]=='3' || n[i]=='5'|| n[i]=='7' || n[i]=='9')
            ++sum;
    }
    cout<<sum<<endl;
    return 0;
}
