#include <bits/stdc++.h>
#define ms(a,v) memset(a,v,sizeof a)
using namespace std;


int main()
{
    int n,m,min1=9,min2=9;
    int mini = 10;
    cin>>n>>m;
    int arr[n],arr2[m];

	for(int i=0;i<n;i++){
        cin >> arr[i];
        min1 = min(min1,arr[i]);
	}

	for(int i=0;i<m;i++){
        cin >> arr2[i];
        min2 = min(min2,arr2[i]);
	}

    for (int i=0 ; i < n ; ++i){
        for(int j=0;j<m;j++){
            if (arr[i]==arr2[j]){
                mini=min(mini,arr[i]);
//                cout<<arr[i]<<endl;
//                return 0;
            }
        }
    }
    if(mini != 10 ){
        cout<<mini<<endl;
    }
    else
        cout<<min(min1,min2)<<max(min1,min2)<<endl;
    return 0;
}
