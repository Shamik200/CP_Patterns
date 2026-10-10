// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 50 - Prefix Sums
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]+=(i?a[i-1]:0);
    }
    int m;
    cin>>m;
    while(m--){
        int q;
        cin>>q;
        int x = lower_bound(a.begin(),a.end(),q)-a.begin();
        cout<<x+1<<"\n";
    }
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}