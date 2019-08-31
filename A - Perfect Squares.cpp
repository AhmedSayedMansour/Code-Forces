#include <bits/stdc++.h>
#define ms(a,v) memset(a,v,sizeof a)
using namespace std;


int main()
{
    int n,k,l;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)    cin >> arr[i];
	sort(arr,arr+n);

	for(int i=n-1;i>=0;i--)
	{

		if(arr[i]<0){
			cout << arr[i];
			break;
		}

		if(arr[i]>0){
            k=(int)sqrt(arr[i]);
            l=pow(k,2);

            if(k*k!=arr[i])
            {
                cout << arr[i];
                break;
            }
	    }

	}
    return 0;
}
