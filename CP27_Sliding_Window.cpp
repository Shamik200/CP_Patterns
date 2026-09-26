// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 27 - Sliding Window
void solve(){
    int n;
    cin>>n;
    int cnt=1, ans=1, p;
    cin>>p;
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        if(x>=p) cnt++;
        else ans=max(ans, cnt), cnt=1;
        p=x;
    }
    ans=max(ans, cnt);
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