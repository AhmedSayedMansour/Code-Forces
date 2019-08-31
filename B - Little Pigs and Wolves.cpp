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
    int n,m,count=0;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if (arr[i][j]=='P'){
                if (i>=1 && arr[i-1][j]=='W'){
                    ++count;
                    arr[i][j]=arr[i-1][j]='.';
                }
                else if (i<n-1 && arr[i+1][j]=='W'){
                    ++count;
                    arr[i][j]=arr[i+1][j]='.';
                }
                else if (j>=1 && arr[i][j-1]=='W'){
                    ++count;
                    arr[i][j]=arr[i][j-1]='.';
                }
                else if (j<m-1 && arr[i][j+1]=='W'){
                    ++count;
                    arr[i][j]=arr[i][j+1]='.';
                }
            }
        }
    }
    cout<<count;
    return 0;
}
