// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 21 - Greedy Packing
void solve(){
    int n,m;
    cin>>n>>m;
    vector<pair<int, int>> ab(m);
    for(int i=0;i<m;i++) cin>>ab[i].first>>ab[i].second;
    sort(ab.begin(), ab.end(), [](auto& a, auto& b){
        return a.second>b.second;
    });
    int ans=0;
    for(int i=0;i<m;i++){
        if(n>=ab[i].first) ans+=ab[i].first*ab[i].second, n-=ab[i].first;
        else{
            ans+=n*ab[i].second;
            cout<<ans<<endl;
            return;
        }
    }
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