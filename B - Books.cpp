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
#define lp(i, w) for(int i=0; i<w ; i++)
#define lp2(i, a, b) for (int i=a; i<b; i++)
typedef long long int lli;
typedef int ll;

using namespace std;

int main()
{
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n,t,sum=0,p=0,tot=0;
    cin>>n>>t;
    int a[n];
    lp(i, n){
        cin>>a[i];
        sum+=a[i];
        while (sum>t){
            sum-=a[p++];
        }
        tot=max(tot,i-p+1);
    }
    cout<<tot;

    return 0;
}
