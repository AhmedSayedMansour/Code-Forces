#include <bits/stdc++.h>

using namespace std;
bool isvowel(char );
int main()
{
	string s;
	cin >> s;
	for(int i=0;i<s.length();++i){
		if (isupper(s[i])) s[i] = tolower(s[i]);
		if (!isvowel(s[i]))cout << '.' << s[i];
	}
	return 0;
}

bool isvowel(char ch) {
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') return true;
	else return false;
}
