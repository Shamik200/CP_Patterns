// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 49 - Permutation Reconstruction
void solve(){
    int n;
    cin>>n;
    set<int> s;
    for(int i=1;i<=2*n;i++) s.insert(i);
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.erase(v[i]);
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        auto it = s.upper_bound(v[i]);
        if(it==s.end()){
            cout<<-1<<"\n";
            return;
        }
        ans.push_back(v[i]);
        ans.push_back(*it);
        s.erase(it);
    }
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<"\n";
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--) solve();
}