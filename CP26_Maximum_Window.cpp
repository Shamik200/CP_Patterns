// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 26 - Maximum Window
void solve(){
    int n;
    cin>>n;
    int p1=1, p2=0, mx=0;
    // 2 2 2 2 1 1 1 2 2
    int p;
    cin>>p;
    for(int i=1;i<n;i++){
        int c;
        cin>>c;
        if(c==p) p1++;
        else{
            mx=max(mx, min(p1, p2));
            p2=p1;
            p1=1;
        }
        p=c;
    }
    mx=max(mx, min(p1, p2));
    cout<<2*mx<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}