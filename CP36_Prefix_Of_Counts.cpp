// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 36 - Prefix Of Counts
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i) a[i]+=a[i-1];
    }
    // 2 7 9 13
    // 6 12
    while(m--){
        int x;
        cin>>x;
        int i=lower_bound(a.begin(), a.end(), x)-a.begin();
        cout<<i+1<<" "<<x-(i?a[i-1]:0)<<endl;
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