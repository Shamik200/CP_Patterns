// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 44 - Coverage Radius From Sorted Gaps
void solve(){
    int n,l;
    cin>>n>>l;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    double ans=0;
    for(int i=0;i<n;i++){
        if(i) ans=max(ans, (a[i]-a[i-1])/2.0);
        else ans=max(ans, (double)a[i]);
        if(i==n-1) ans=max(ans, (double)(l-a[i]));
        else ans=max(ans, (a[i+1]-a[i])/2.0);
    }
    cout<<fixed<<setprecision(10)<<ans<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}