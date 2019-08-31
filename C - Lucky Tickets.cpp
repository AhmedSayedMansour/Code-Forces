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

    int n,a,m1=0,m2=0,m3=0;
    cin>>n;
    lp(i,n){
        cin>>a;
        if (a%3==0)++m3;
        else if (a%3==1)++m1;
        else ++m2;
    }
    cout<<m3/2 + min(m1,m2);
    return 0;
}
