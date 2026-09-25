// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 23 - Modular Exponentiation
void solve(){
    int n,m;
    cin>>n>>m;
    // m<2^n -> m -> log2(m)<n
    // m>=2^n -> m%2^n
    if(log(m)<n*log(2)) cout<<m<<endl;
    else cout<<m%(int)(1<<n)<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}