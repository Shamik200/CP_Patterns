// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 10 - Parity Reasoning 
void solve(){
    int n;
    cin>>n;
    // any other of even ele -> 2 6 8
    // even number of odd ele -> 1 5....
    int f=0, s=0, t=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x&1){
            if(f) s=i;
            else f=i;
        } else t=i;
    }
    if(t) cout<<1<<endl<<t<<endl;
    else if(f && s) cout<<2<<endl<<f<<" "<<s<<endl;
    else cout<<-1<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--) solve();
}