// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 48 - Prime vs Composite Coloring
void solve(){
    int n;
    cin>>n;
    vector<bool> a(n, false);
    // 3 -> 1, 6 -> 2
    // 2 -> 1, 4 -> 2, 6 -> 3, 8 -> 4
    // 6 -> x, 12 -> x
    // 2 3 4 5 6 7 8 9 10 11
    // 1 1 2 1 2 1 2 2 2 1
    // IDEA: just put 1 for numbers which are prime
    // int ans=0;
    // for(int i=2;i<=n+1;i++){
    //     if(a[i-2]==0){
    //         int x=1;
    //         for(int j=i;j<=n+1;j+=i) a[j-2]=x++;
    //         ans=max(ans, x-1);
    //     }
    // }
    // cout<<ans<<"\n";
    // for(int i=0;i<n;i++) cout<<a[i]<<" ";
    // cout<<endl;
    if(n==1){
        cout<<1<<endl<<1<<endl;
        return;
    }
    if(n==2){
        cout<<1<<endl<<1<<" "<<1<<endl;
        return;
    }
    cout<<2<<endl;
    for(int i=2;i<=n+1;i++){
        if(!a[i-2]){
            for(int j=2*i;j<=n+1;j+=i) a[j-2]=true;
        }
    }
    for(int i=0;i<n;i++) cout<<a[i]+1<<" ";
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}