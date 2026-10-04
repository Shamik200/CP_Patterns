// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 45 - LCM AND DIVISIBILITY
void solve(){
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    // Red - 2 4 6 8 10 12 14 16 18 20
    // Pink - 3 6 9 12 15 18 21 24 27 30
    // LCM of 2 and 3 is 6
    int lcm = (x*y)/__gcd(x,y);
    // 5 5 -> 1
    int ans = b/lcm - (a-1)/lcm;
    cout<<ans<<"\n";
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}