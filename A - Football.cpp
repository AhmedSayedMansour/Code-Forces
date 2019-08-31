#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,q=1,w=0;
	string *a,a2;
	cin>>n;
	a=new string[n];
	cin>>a[0];
    for(int i=1;i<n;++i){
        cin>>a[i];
        if(a[i]==a[0])++q;
        else {
            ++w;
            a2=a[i];
        }
    }
    q>w ? cout<<a[0]:cout<<a2;
}
