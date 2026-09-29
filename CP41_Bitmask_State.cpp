// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 41 - Bitmask State
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // (0,1) -> n=3 -> 2^3 -> 8 states -> 111 110 101 011 001 010 100 000
    for(int mask=0;mask<(1<<n);mask++){
        int curr=0;
        for(int i=0;i<n;i++){
            // if(mask&(1<<i)) curr=(curr+a[i])%360;
            // else curr=(curr-a[i]+360)%360;
            curr=(curr+360+(mask&(1<<i)?1:-1)*a[i])%360;
        }
        if(curr==0){
            cout<<"YES"<<endl;
            return;
        }
    }
    // 2^15 -> 32768 states* 15 -> 491520 operations -> 500000 -> 5*10^5
    // 50 50 40 30 20 10 -> nlongn -> 15log(15) -> 15*4 -> 60 operations
    // 40 30 20 10 -> subset sum problem -> 180*15/2 -> 1350 operations*15 -> 20250 operations -> 2*10^4
    // x x+360 x-360 x -> x -> 360-x
    cout<<"NO"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}