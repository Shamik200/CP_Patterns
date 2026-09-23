// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 12 - Longest Consecutive Run
void solve(){
    int n;
    cin>>n;
    int x=0, curr=1, ans=1;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        if(x){
            if(c>x) curr++;
            else{
                ans=max(ans, curr);
                curr=1;
            }
        }
        x=c;
    }
    cout<<max(ans, curr)<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}