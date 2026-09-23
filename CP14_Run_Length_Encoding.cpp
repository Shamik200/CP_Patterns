// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 14 - Run Length Encoding 
void solve(){
    int n;
    cin>>n;
    int p=0;
    vector<int> v;
    // ............... 1
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(p){
            if(x==1) v.push_back(p);
        }
        p=x;
    }
    v.push_back(p);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}