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
    string s;
    cin>>s;
    int n=s.size();
    int count =0;
    //cout<<n<<endl;
    bool k=0;
    for(int i=n;i>0;--i){
        if(!k && s[i]=='1'){
            count+=2;
            k=1;
        }
        if(k && s[i]=='0'){
            ++count;
        }
    }
    cout<<count+n-1;
    return 0;
}
