// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 31 - Greedy Algorithm
void solve(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> xy(n);
    for(int i=0;i<n;i++) cin>>xy[i].first>>xy[i].second;
    // 1 5 | 1 3
    sort(xy.begin(), xy.end(), [](auto &x, auto &y){
        if(x.first==y.first) return x.second>y.second;
        return x.first<y.first;
    });
    for(int i=0;i<n;i++){
        if(s>xy[i].first) s+=xy[i].second;
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}