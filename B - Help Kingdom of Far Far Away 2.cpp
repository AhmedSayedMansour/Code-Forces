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
    char c[110];
	gets(c);
	int n,ind=-1;
	n=strlen(c);
	char ans[200];
	int t=0,i=0,count=0;

	if(c[0]=='-'){
		t++;
		i++;
		cout<<"($";
	}

	else    cout<<"$";

	for(int j=i;j<n;j++){
		if(c[j]=='.'){
			ind=j;
			break;
		}
		else    count++;
	}

	int j,temp=0,rem,z=0;

	if(t==0)    j=count-1; //if "-" = negative number

	else    j=count;    //if no "-"

	temp=count/3;   //temp is how many ","'s that i need / rem
	rem=count%3;    //rem is the quantity of numbers that are in the most left side

	if(rem==0)
		z=0;

	else
	{
		z=3-rem;
	}

	for(int k=i;k<=j;k++)
	{
		if(z==3)
		{
			cout<<",";
			z=0;
		}
		cout<<c[k];
		z++;
	}

	if(ind==-1)
		cout<<".00";

	else
	{
		z=0;
		for(int k=ind;k<n;k++){
			cout<<c[k];
			z++;
			if(z==3)    break;
		}
		if(z<3){
			while(z!=3){
				cout<<"0";
				z++;
			}
		}
	}
	if(t==1)
		cout<<")";

    return 0;
}
