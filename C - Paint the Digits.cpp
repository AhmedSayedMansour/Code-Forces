#include <bits/stdc++.h>
#define ms(a,v) memset(a,v,sizeof a)
using namespace std;


int main()
{
    int n;
    cin>>n;
    int z;
    string s,w;
    while(n--){
        cin>>z>>s;
        w=s;
        string res="";
        sort(s.begin(),s.end());
        int ind=0,last=0;
        bool chk = true;
        for (int i=0;i < z;++i){
            if (w[i]==s[ind]){
                ind++;
                res+='1';
            }
            else{
                if(w[i]>=last){
                    res+='2';
                    last = w[i];
                    //cout<<(char)last<<endl;
                }
                else {
                    chk = false;
                    break;
                }
            }
        }
        if(chk) cout<<res<<endl;
        else cout<<"-\n";
    }
    return 0;
}
