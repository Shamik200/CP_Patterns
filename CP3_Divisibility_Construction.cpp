// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 3 - Divisibility Construction
void solve(){
    int a,b;
    cin>>a>>b;
    // a%b==0 -> 0
    // a/b -> a++
    // 10%4 -> 2 -> 4-2=2
    // 13%9 -> 4 -> 9-4=5
    if(a%b==0) cout<<0<<endl;
    else cout<<(b-(a%b))<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--) solve();
}