// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 29 - Bit Representation
void solve(){
    int x;
    cin>>x;
    // 1 2 4 8 16 -> 12 -> 6 -> 1+(exponent of 2) -> logn
    // 24 -> 12 -> 6 -> 3 ............000 -> log(logn)
    // 24/(2^n) -> n -> choose
    // 24 -> 2 4 8 16
    // 111111111111111 -> worst case
    int ans=0;
    while(x){
        // ans+=(x&1);
        // x>>=1;
        if(x&1) ans++;
        x>>=1;
        if(x==0) break;
        int l=0, h=log(x)/log(2), divs=0;
        while(l<=h){
            int m=(l+h)/2;
            if(x%(1<<m)==0) divs=m, l=m+1;
            else h=m-1;
        }
        x>>=divs;
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