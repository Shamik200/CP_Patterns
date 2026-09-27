// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 33 - Hash Map
void solve(){
    int n,m;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>m;
    while(m--){
        string s;
        cin>>s;
        if(s.size()==n){
            map<char,int> mp;
            map<int,char> mp1;
            bool flag=true;
            for(int i=0;i<n;i++){
                if(mp.find(s[i])!=mp.end() && mp[s[i]]!=a[i]){
                    cout<<"NO"<<endl;
                    flag=false;
                    break;
                }
                if(mp1.find(a[i])!=mp1.end() && mp1[a[i]]!=s[i]){
                    cout<<"NO"<<endl;
                    flag=false;
                    break;
                }
                mp[s[i]]=a[i];
                mp1[a[i]]=s[i];
            }
            if(flag) cout<<"YES"<<endl;
        } else cout<<"NO"<<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--) solve();
}