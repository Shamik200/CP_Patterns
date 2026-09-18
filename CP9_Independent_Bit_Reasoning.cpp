// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 9 - Independent Bit Reasoning 
void solve(){
    int a,b;
    cin>>a>>b;
    // a,b -> 1 1 -> 1 -> 0 0
    // a,b -> 1 0 -> 1 0 -> 0+1=1
    // a,b -> 0 1 -> 1 0 -> 1+0=1
    // a,b -> 0 0 -> 0 -> 0 0
    int ans=0, i=0;
    // %2 -> &1
    // /2 -> >>1
    // pow(2, i) -> 1<<i -> 10000....i
    while(a || b){
        if((a&1)^(b&1)) ans+=(1<<i);
        a>>=1;
        b>>=1;
        i++;
    }
    cout<<ans<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--) solve();
}