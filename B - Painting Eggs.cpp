#include <bits/stdc++.h>
using namespace std;

int main() {

    //freopen("input.txt", "rt", stdin);

    int n;
    cin >> n;

    string ans; int sum = 0;

    for(int i=0; i < n; ++i ){
        int x, y;
        cin >> x >> y;

        if(abs(sum - y) <= 500)
            ans += 'G', sum -= y;
        else
            ans += 'A', sum += x;
    }
    cout << ans << endl;
    return 0;
}
