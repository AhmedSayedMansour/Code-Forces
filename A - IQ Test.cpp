#include <bits/stdc++.h>
#define ms(a,v) memset(a,v,sizeof a)
using namespace std;


int main()
{
    char arr[4][4];
    for(int i=0 ; i<4 ; ++i){
        for(int j=0 ; j<4 ; ++j){
            cin>>arr[i][j];
        }
    }

    int dots =0, win=0;
    for(int i=0 ; i<3 ; ++i){
        for (int j=0;j<3;++j){
            (arr[i  ][j  ]=='.')? dots++:win++;
            (arr[i  ][j+1]=='.')? dots++:win++;
            (arr[i+1][j  ]=='.')? dots++:win++;
            (arr[i+1][j+1]=='.')? dots++:win++;

            //cout<<dots<<' '<<win<<endl;
            if(dots == 0 || dots == 1 || win == 0 || win == 1 ){
                cout<<"YES"<<endl;
                return 0;
            }
            dots =0, win=0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
