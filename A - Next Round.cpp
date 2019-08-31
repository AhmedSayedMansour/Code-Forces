#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[50],k,l=0,ans;
    cin>>n>>k;
    for (int i = 0 ; i < n ; i++)cin >> a[i];
    for (int i = 0 ; i < n ; i++){
    	if (a[i] > 0)l++;
	}
	ans = k;
	for (int i = k ; i < n ; i++){
		if (a[i] == a[i - 1])ans++;
		else break;
	}
	cout<<min(ans,l);
    return 0;
}
