// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 15 - Set Membership 
void solve(){
    string s;
    cin>>s;
    // set<char> st;
    // for(int i=0;i<s.size();i++) st.insert(s[i]);
    // if((st.size())%2) cout<<"IGNORE HIM!"<<endl;
    // else cout<<"CHAT WITH HER!"<<endl;
    // cout<<((st.size()%2)?"IGNORE HIM!":"CHAT WITH HER!")<<endl;
    vector<bool> f(26, false);
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(!f[s[i]-'a']) ans++;
        f[s[i]-'a']=true;
    }
    cout<<((ans%2)?"IGNORE HIM!":"CHAT WITH HER!")<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}