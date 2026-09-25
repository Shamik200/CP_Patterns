// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 22 - Minimum Window
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> f(m);
    for(int i=0;i<m;i++) cin>>f[i];
    sort(f.begin(),f.end());
    int ans=INT_MAX;
    for(int i=0;i<=m-n;i++) ans=min(ans, f[i+n-1]-f[i]);
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