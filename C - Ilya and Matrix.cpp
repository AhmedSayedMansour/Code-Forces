#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <bits/stdc++.h>
#define lp(i, e) for(int i=0; i<e ; i++)
#define lp2(i, f, e) for (int i=f; i<e; i++)
typedef long long int lli;
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    long long tot=0,base=0;
    cin>>n;
    vector<int> arr(n);
    lp (i, n) {
        cin>>arr[i];
    }
    sort(arr.rbegin(), arr.rend());
    for(int i = 1; i <= n; i*= 4) {
        tot += accumulate(arr.begin(), arr.begin() +i, base);
    }
    cout << tot << endl;
	return 0;
}
