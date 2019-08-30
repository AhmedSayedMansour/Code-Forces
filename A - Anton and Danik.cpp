#include <iostream>

using namespace std;

int main()
{
    int n,Anton=0,Danik=0;
    cin>>n;
    string win;
    cin>>win;
    for (int i=0;i<n;++i)
    {
        if(win[i]=='A')
            Anton+=1;
        else
            Danik+=1;
    }
    if(Anton>Danik)
        cout<<"Anton";
    else if(Anton<Danik)
        cout<<"Danik";
    else cout<<"Friendship";
    return 0;
}
