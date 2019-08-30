#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    string x;
    int u=0,l=0;
    cin>>x;
    for(int i=0;i<x.length();++i)
    {
        if(islower(x[i]))
            ++l;
        else if(isupper(x[i]))
            ++u;
    }
    if(l>=u)
    {
        for(int i=0;i<x.length();++i)
        {
            x[i]=tolower(x[i]);
        }
    }
    else
    {
        for(int i=0;i<x.length();++i)
        {
            x[i]=toupper(x[i]);
        }
    }
    cout<<x;
    return 0;
}
