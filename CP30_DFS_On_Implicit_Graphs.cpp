// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// int dfs(vector<int> &adj, int i, int j){
//     dfs(i+1, j);
//     dfs(i-1, j);
//     dfs(i, j+1);
//     dfs(i, j-1);
    // for(int x:adj[i]){
    //     dfs(x, j);
    // }
// }
//  -
// -X-
//  -
// CP PATTERN 30 - DFS On Implicit Graphs
void solve(){
    int n,t;
    cin>>n>>t;
    vector<int> a(n-1);
    for(int i=0;i<n-1;i++) cin>>a[i];
    // 1<=ai<=n-i -> i+1<=ai<=n
    int i=1;
    while(i<=t){
        if(i==t){
            cout<<"YES"<<endl;
            return;
        }
        i+=a[i-1];
    }
    cout<<"NO"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}