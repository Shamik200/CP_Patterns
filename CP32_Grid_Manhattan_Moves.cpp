// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 32 - Grid Manhattan Moves
void solve(){
    string s,t;
    cin>>s>>t;
    // vertex -> min(x, y), ans -> max(x, y)
    int x=abs(s[0]-t[0]), y=abs(s[1]-t[1]);
    cout<<max(x, y)<<endl;
    string ans="";
    if(s[0]<t[0]) ans+='R';
    else ans+='L';
    if(s[1]<t[1]) ans+='U';
    else ans+='D';
    for(int i=0;i<min(x, y);i++) cout<<ans<<endl;
    if(y>x){
        if(s[1]<t[1]) for(int i=0;i<y-x;i++) cout<<"U"<<endl;
        else for(int i=0;i<y-x;i++) cout<<"D"<<endl;
    }
    if(x>y){
        if(s[0]<t[0]) for(int i=0;i<x-y;i++) cout<<"R"<<endl;
        else for(int i=0;i<x-y;i++) cout<<"L"<<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}