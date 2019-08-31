#include <bits/stdc++.h>
#define ms(a,v) memset(a,v,sizeof a)
using namespace std;


int main()
{
    int sum=0;
	int arr[6];
	for(int i=0;i<6;i++){
        cin >> arr[i];
        sum += arr[i];
	}
	int numreq = sum /2;
	if(sum %2 != 0 ){
        cout<<"NO"<<endl;
        return 0;
	}
    //cout<<sum<<endl;
	//cout<<numreq<<endl;

	for(int i=0;i<6;i++){
        for (int j=i+1 ; j<6 ; ++j){
            for (int l=j+1 ; l<6 ; ++l){
                    //cout<<arr[i]+arr[j]+arr[l]<<endl;
                    if (arr[i]+arr[j]+arr[l]==numreq){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
	}

	cout<< "NO"<<endl;
    return 0;
}
