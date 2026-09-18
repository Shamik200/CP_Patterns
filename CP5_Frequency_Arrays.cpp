// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 5 - Frequency Arrays
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    unordered_map<int, int> f;
    // vector<int> ans;
    int l=0;
    for(int i=n-1;i>=0;i--){
        if(f[a[i]]) a[i]=0;
        else l++;
        f[a[i]]++;
    }
    cout<<l<<endl;
    for(int i=0;i<n;i++) if(a[i]) cout<<a[i]<<" ";
    cout<<endl;
    // cout<<ans.size()<<endl;
    // for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<" ";
    // cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}