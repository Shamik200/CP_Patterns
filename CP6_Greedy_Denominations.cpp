// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 6 - Greedy Denominations
void solve(){
    int n;
    cin>>n;
    int ans=0;
    // 125 -> 1, 225-2*100->25
    ans+=(n/100);
    n%=100;
    ans+=(n/20);
    n%=20;
    ans+=(n/10);
    n%=10;
    ans+=(n/5);
    n%=5;
    ans+=n;
    // 4+5+10+80
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