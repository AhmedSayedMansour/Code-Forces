#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s1[100001],s2[100001];
    cin >> s1 >> s2 ;
	if (strcmp(s1,s2))cout << max (strlen(s1),strlen(s2))<<endl;
	else cout<< - 1 <<endl;
    return 0;
}
