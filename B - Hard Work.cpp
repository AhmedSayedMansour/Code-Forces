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

std::string delSignwlower(std::string s);

using namespace std;

int main()
{
    string a,b,c,x;
    int n;
    cin>>a>>b>>c;
    cin>>n;
    a=delSignwlower(a);
    b=delSignwlower(b);
    c=delSignwlower(c);
    string p1,p2,p3,p4,p5,p6;  ///all probabilities
    p1=a+b+c;
    p2=a+c+b;
    p3=b+a+c;
    p4=b+c+a;
    p5=c+a+b;
    p6=c+b+a;
    bool acc[n];
    for (int i=0;i<n;++i) acc[i]=0;

    for (int i=0;i<n;++i){
        cin>>x;
        for(int j=0;j<6;++j){
            x=delSignwlower(x);
            if (x==p1 || x==p2 ||x==p3 ||x==p4 ||x==p5 ||x==p6)
                acc[i]=1;
        }
    }
    for (int i=0;i<n;++i)
         (acc[i]) ? cout<<"ACC"<<endl : cout<<"WA" <<endl;

    return 0;
}

string delSignwlower(string s) {
    string str = "";
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
        if (isalpha(s[i])) {
            str += s[i];
        }
    }
    return str;
}
