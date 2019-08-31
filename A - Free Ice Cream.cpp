#include <bits/stdc++.h>
#define ms(a,v) memset(a,v,sizeof a)
using namespace std;


int main()
{
    int n,k,ans =0;
    cin >> n>>k;
    int x,y;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		ans += (y - x + 1);
	}

	((k - ans%k) == k ) ? cout<< 0 : cout <<k - ans%k ;
	cout<< endl;

    return 0;
}
