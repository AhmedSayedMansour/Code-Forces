#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,sum=0,out=0;
    vector<int> vec;
    double eq;
    cin>>n>>a>>b;
    int arr[n];
    for (int i=0;i<n;++i){
        cin>>arr[i];
        sum+=arr[i];
    }
    vec.push_back(0);
    for (int i=1;i<n;++i){
        vec.push_back(arr[i]);
    }
    sort (vec.begin(), vec.begin()+(n));
    for (int i=1;i<n;++i){
        arr[i]=vec[i];
    }
    for (int i=n-1;i>=1;--i){
        if((eq=(arr[0]*a)/sum)>=b){
            cout<<out;
            return 0;
        }
        else sum-=arr[i];
        out+=1;
    }
    cout<<out;
    return 0;
}
