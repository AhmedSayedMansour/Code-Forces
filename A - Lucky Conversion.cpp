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
    string a,b;
    cin>>a>>b;
    int count4=0,count7=0;
    for(int i=0;i<a.length();++i){
        if (a[i]=='4' && b[i]=='7') count7++;
        else if (a[i]=='7' && b[i]=='4') count4++;
    }
    if (count4>=count7)cout<<count4;
    else cout <<count7;
    return 0;
}
