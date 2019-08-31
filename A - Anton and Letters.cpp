#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;
int main()
{
    string s;
    set<char> myset;
    cin.ignore();
    getline (cin, s);
        for (int i=0;i<s.length();i+=3)
        {
            if(isalpha(s[i]))
            myset.insert(s[i]);
        }
        cout<<myset.size();
    return 0;
}
