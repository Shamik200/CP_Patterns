// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 35 - Mex Tracking
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // 0; [],[0]->0,1;
    // 0,0; [],[0]->0,1; ->0,1,0 or 0,1,1
    // 0,1; [],[0],[1],[0,1]->0,1,2 -> ...
    // 0,1,1; [],[0],[1],[0,1]->0,1,2 

    // min and max
    // 0 1 2 1 -> 0, 1, 2, 1 
    if(a[0]){
        cout<<1<<endl;
        return;
    }
    int mn=0, mx=0;
    for(int i=1;i<n;i++){
        if(a[i]>mx+1){
            cout<<i+1<<endl;
            return;
        }
        mn=min(mn, a[i]);
        mx=max(mx, a[i]);
    }
    cout<<-1<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}