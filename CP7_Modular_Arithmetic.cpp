// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 7 - Modular Arithmetic
void solve(){
    int n;
    cin>>n;
    // 1 -> -1
    // 2 -> 1
    // 3 -> -2
    // 4 -> 2
    // 5 -> -3
    // 6 -> 3
    cout<<((n%2)?(-1):(1))*((n+1)/2)<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}