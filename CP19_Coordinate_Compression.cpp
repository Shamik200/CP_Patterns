// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 19 - Coordinate Compression 
void solve(){
    int n,d;
    cin>>n>>d;
    vector<int> x(n);
    for(int i=0;i<n;i++) cin>>x[i];
    // -3 -> -6, 0
    // 2
    // ..
    // x[i-1]     x[i]-d     x[i] -> d<x[i]-d-x[i-1] -> 2*d<x[i]-x[i-1]
    // x[i]     x[i]+d     x[i+1] -> d<x[i+1]-x[i]+d -> 2*d<x[i+1]-x[i]
    // 2*d==x[i]-x[i-1]
    int ans=0;
    for(int i=0;i<n;i++){
        if(i==0) ans++;
        else if(x[i]-d>=x[i-1] && 2*d<x[i]-x[i-1]) ans++;
        if(i==n-1) ans++;
        else if(x[i]+d<=x[i+1] && 2*d<x[i+1]-x[i]) ans++;
        if(i && 2*d==x[i]-x[i-1]) ans++;
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