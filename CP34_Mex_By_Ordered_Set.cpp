// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 34 - Mex By Ordered Set
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    int ans=0;
    // x=9
    // 0 1 2 3 6 7 11
    // x=2
    // 2
    for(int i=0;i<n;i++){
        if(a[i]==x){
            if(i==0) ans+=x+1;
            else ans+=(a[i]-a[i-1]);
            break;
        }
        else if(a[i]>x){
            if(i==0) ans+=x;
            else ans+=(x-a[i-1]-1);
            break;
        }
        else{
            if(i==0) ans+=a[i];
            else ans+=(a[i]-a[i-1]-1);
        }
    }
    if(a[n-1]<x) ans+=(x-a[n-1]-1);
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