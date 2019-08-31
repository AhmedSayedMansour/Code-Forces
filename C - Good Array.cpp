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
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n,sum=0,max=0,z=0,max2=0,count=0;
    vector <int> v;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
		if(a[i]>=max)
		{
			max=a[i];
			z=i;
		}

	}
	for(ll i=0;i<n;i++)
	{
		if(i!=z)
		{
			if(a[i]>max2)
				max2=a[i];
		}
	}
    for(ll i=0;i<n;i++){
        if(a[i]==max && sum-a[i]-max2==max2){
			v.push_back(i);
			count++;
			//cout<<777<<endl;
		}
		else if(sum-a[i]-max==max && a[i]!=max){
            v.push_back(i);
            count++;
            //cout<<888<<i<<endl;
        }
    }
    if (count ==0) cout<<0;
    else {
        cout<<count<<endl;
        for(int i=0;i<v.size();++i){
            cout<<v[i]+1<<' ';
        }
    }
    return 0;
}
