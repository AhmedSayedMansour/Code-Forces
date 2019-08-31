#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,d;
    cin >> n >> d;
	cin >> m;
	for(int i = 0; i < m; ++i){
		int x, y;
		cin >> x >> y;

		bool ok = true;
		if(!((x - y) <= d && (x - y) >= -d))
			ok = false;
		if(!((x + y) <= n + n - d && (x + y) >= d))
			ok = false;

		if(ok) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}
