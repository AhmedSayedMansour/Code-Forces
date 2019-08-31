#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
 
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[s.length()],count=0;
    for(int i=0;i<s.length();++i)
    {
        if (s[i]=='1'){
            a[count]=1;
            ++count;
        }
        else if (s[i]=='2'){
            a[count]=2;
            ++count;
       }
        else if (s[i]=='3'){
            a[count]=3;
            ++count;
        }
    }
    sort(a,a+count);
    for(int i=0;i<count;i++){
        cout<<a[i];
        if(i!=count-1)cout<<'+';
    }
    return 0;
}
