// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 1 - Ceiling Arithmetic
void solve(){
    int n,m,a;
    cin>>n>>m>>a;
    // ---------------------------m=5
    // ----- a=2 ceil
    cout<<((m+a-1)/a)*((n+a-1)/a)<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}