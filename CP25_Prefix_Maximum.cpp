// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 25 - Prefix Maximum
void solve(){
    int n;
    cin>>n;
    int mx=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cout<<x+mx<<" ";
        mx=max(mx,x+mx);
    }
    // bi = ai - max(0, a1, a2, ...., ai-1)
    // ai = bi + max(0, a1, a2, ...., ai-1)
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}