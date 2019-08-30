#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    char o[n];
    for(int i=0;i<n;++i)
        cin>>o[i];
    for(int i=0;i<n-1;++i)
    {
        if(o[i]==o[i+1])
            sum+=1;
    }
    cout<<sum;
    return 0;
}
