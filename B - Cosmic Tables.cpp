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
    int n,m,k,x,y;
    cin>>n>>m>>k;
    int col[m+1]={0},row[n+1]={0},a[n+1][m+1]={0};
    char c;

    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin>>a[i][j];

    for (int i=1;i<=n;i++)
        row[i]=i;

    for (int i=1;i<=m;i++)
    col[i]=i;

    for (int i=1;i<=k;i++){
        cin>>c>>x>>y;
        if (c=='g')
            cout<<a[row[x]][col[y]]<<"\n";
        else if (c=='r')
            swap(row[x],row[y]);
        else
            swap(col[x],col[y]);
    }

}
