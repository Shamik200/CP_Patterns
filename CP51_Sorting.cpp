// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 51 - Sorting
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int m;
    cin>>m;
    vector<int> b(m);
    for(int i=0;i<m;i++) cin>>b[i];
    sort(b.begin(),b.end());
    int i=0,j=0,ans=0;
    while(i<n && j<m){
        if(abs(a[i]-b[j])<=1) ans++,i++,j++;
        else if(a[i]<b[j]) i++;
        else j++;
    }
    cout<<ans<<"\n";
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}