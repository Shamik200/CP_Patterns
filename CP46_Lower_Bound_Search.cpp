// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 46 - Lower Bound Search
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> mx(n), pre(n);
    int p=-1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mx[i]=max((i?mx[i-1]:0), x);
        pre[i]=x+(i?pre[i-1]:0);
        p=x;
    }
    while(q--){
        int k;
        cin>>k;
        // lower bound -> >=k, upper bound -> >k
        int idx=upper_bound(mx.begin(), mx.end(), k)-mx.begin();
        if(idx==0) cout<<0<<" ";
        else cout<<pre[idx-1]<<" ";
    }
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--) solve();
}