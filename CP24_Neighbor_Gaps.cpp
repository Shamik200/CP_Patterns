// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 24 - Neighbor Gaps
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int mx1=0, mx2=0, mn1=INT_MAX, mn2=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        // 3 3
        if(a[i]>mx1){
            mx2=mx1;
            mx1=a[i];
        } else mx2=max(mx2,a[i]);
        if(a[i]<mn1){
            mn2=mn1;
            mn1=a[i];
        } else mn2=min(mn2,a[i]);
    }
    if(n==2){
        cout<<0<<endl;
        return;
    }
    // cout<<mn1<<" "<<mn2<<" "<<mx2<<" "<<mx1<<endl;
    cout<<min(mx2-mn1, mx1-mn2)<<endl;
    // sort(a.begin(),a.end());
    // // 2 3...................4 7
    // cout<<min(a[n-2]-a[0], a[n-1]-a[1])<<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}