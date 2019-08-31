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
long long positive[11],negative[11];
int main()
{
    long long n;
    cin>>n;
    long long x, zero=0;
    for(long long i=0;i<n;++i){
        cin>>x;
        if(x==0) {zero++;}
        else{
        if(x<0) negative[abs(x)]++;
        else if(x>0)    positive[x]++;
        }
    }
    long long ans=(zero*(zero-1))/2;   //to get number of couples of zeros
    for(int i=1;i<=10;++i)
        ans+=(negative[i]*positive[i]);

    cout<<ans;

    return 0;
}
