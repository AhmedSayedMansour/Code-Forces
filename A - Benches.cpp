#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
	cin>>n>>m;
	int a = 0, b = 0, r;
	for(int i = 0; i < n; i++){
		cin >> r;
		a = max(r, a);
		b += r;
	}
	int s=( (m - n * a + b) + n - 1 ) / n + a;
	cout << max(a, s) << " " << a + m << '\n';
    return 0;
}
