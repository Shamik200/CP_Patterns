// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 38 - Frequency On Strings
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    // map<char, int> mp;
    vector<int> mp(26, 0);
    int ans=0;
    for(int i=0;i<2*n-2;i+=2){
        if(s[i+1]-'A'!=s[i]-'a'){
            if(mp[s[i+1]-'A']) mp[s[i+1]-'A']--;
            else ans++;
            mp[s[i]-'a']++;
        }
    }
    cout<<ans<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}