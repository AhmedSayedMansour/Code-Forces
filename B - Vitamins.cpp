#include<bits/stdc++.h>
using namespace std;

int n,ans;
string s;
int dem[5];
map<string,int>mp;
string dic[8]={"","A","B","C","AB","BC","AC","ABC"};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    mp["A"]=mp["B"]=mp["C"]=mp["AB"]=mp["BC"]=mp["AC"]=mp["ABC"]=1e8+5;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int val;
        cin>>val>>s;
        sort(s.begin(),s.end());
        mp[s]=min(mp[s],val);
    }
    ans=1e7;
    for(int i=0;i<8;++i){
        for(int j=0;j<8;++j){
            for(int t=0;t<8;++t){
            string tmp=dic[i]+dic[j]+dic[t];
            dem[0]=dem[1]=dem[2]=0;
            for(int k=0;k<tmp.length();++k){
                dem[tmp[k]-'A']++;
            }
            bool check=1;
            for(int k=0;k<3;++k)if(!dem[k])check=false;
            if(check){
                ans=min(mp[dic[i]]+mp[dic[j]]+mp[dic[t]],ans);

            }
            }
        }
    }
    if(ans!=1e7)cout<<ans;
    else cout<<"-1";
}
