#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    long long m , n , a , x = 0 , z = 0 , y = 0;

    cin>>m>>n>>a;
    x = ceil ((double)m/a);
    y = ceil ((double)n/a);
    z = x * y ;
    cout<<z<<endl;

}
