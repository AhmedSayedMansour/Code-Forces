#include <bits/stdc++.h>
#define ms(a,v) memset(a,v,sizeof a)
using namespace std;


int main()
{
	int n,ans=0,temp=0;
	int a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		temp|=a;
	}
	ans+=temp;
	temp=0;
	for(int i=0;i<n;i++){
		cin>>a;
		temp|=a;
	}
	ans+=temp;
	cout<<ans<<endl;
    return 0;
}
