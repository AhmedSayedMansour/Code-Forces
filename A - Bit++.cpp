#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cin >>n;
    string x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        if(x[i]=="X++"||x[i]=="++X")sum+=1;
        if(x[i]=="X--"||x[i]=="--X")sum-=1;
    }
    cout<<sum<<endl;
    return 0;
}
