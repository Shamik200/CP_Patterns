// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 37 - Binary Search
void solve(){
    int n;
    cin>>n;
    vector<int> x(n);
    for(int i=0;i<n;i++) cin>>x[i];
    sort(x.begin(), x.end());
    int q;
    cin>>q;
    while(q--){
        // 3 6 8 10 11
        int y;
        cin>>y;
        cout<<upper_bound(x.begin(), x.end(), y)-x.begin()<<endl;
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