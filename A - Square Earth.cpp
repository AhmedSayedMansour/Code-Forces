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

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    if ( x1 == x2 && ( x1 == 0 || x1 == n ) ){
        cout<<abs(y1-y2);
        return 0;
    }
    if ( y1 == y2 && ( y1 == 0 || y1 == n ) ){
        cout<<abs(x1-x2);
        return 0;
    }
    int p1,p2,p3,p4;
    p1 = x1+y1 + x2+y2;
    p2 = (n-x1)+y1 + (n-x2)+y2;
    p3 = x1+(n-y1) + x2+(n-y2);
    p4 = (n-x1)+(n-y1) + (n-x2)+(n-y2);
    cout<<min(min(p1,min(p2,p3)),p4);
    return 0;
}
