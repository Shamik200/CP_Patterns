// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 39 - Suffix Sums
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n), suff(n, 0);
    for(int i=0;i<n;i++) cin>>a[i];
    set<int> s;
    suff[n-1]=1;
    s.insert(a[n-1]);
    for(int i=n-2;i>=0;i--){
        if(s.find(a[i])==s.end()){
            suff[i]=suff[i+1]+1;
            s.insert(a[i]);
        } else suff[i]=suff[i+1];
    }
    while(m--){
        int x;
        cin>>x;
        cout<<suff[x-1]<<endl;
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