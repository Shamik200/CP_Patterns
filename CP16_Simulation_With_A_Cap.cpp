// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 16 - Simulation With A Cap
void solve(){
    int n,k;
    cin>>n>>k;
    // while(k--){
    //     if(n%10) n--;
    //     else n/=10;
    // }
    // cout<<n<<endl;
    // 11111111111111111111111 50
    // 99999999999999999999999 50 -> 50/10 -> 5
    while(k){
        int x=n%10;
        if(!x) n/=10, k--;
        if(x<k) n-=x, k-=x;
        else n-=k, k=0;
        // cout<<n<<" "<<k<<endl;
    }
    cout<<n<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}