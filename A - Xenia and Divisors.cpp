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

int arr[7];

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;++i){
        cin>>a[i];
        arr[a[i]]++;
    }
    if(arr[1]!=n/3 || arr[5]>0 || arr[7]>0 || arr[2]+arr[3]!=n/3 || arr[4]+arr[6]!=n/3 || arr[4]> arr[2] ){
        cout<<"-1";
        exit(0);
    }
    for(int i=0;i<arr[4];i++)   cout<<"1 2 4"<<endl;
    arr[2]-=arr[4];
    for(int i=0;i<arr[2];i++)   cout<<"1 2 6"<<endl;
    arr[6]-=arr[2];
    for(int i=0;i<arr[6];i++)   cout<<"1 3 6"<<endl;

    return 0;
}
