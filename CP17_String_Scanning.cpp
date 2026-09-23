// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 17 - String Scanning
void solve(){
    string s;
    cin>>s;
    // if(s.size()<=10) cout<<s<<endl;
    // else cout<<s[0]<<" "<<s.size()-2<<" "<<s[s.size()-1]<<endl;
    cout<<((s.size()<=10)?s:(s[0]+to_string(s.size()-2)+s[s.size()-1]))<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--) solve();
}