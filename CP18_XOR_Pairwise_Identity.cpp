// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 18 - XOR Pairwise Identity
void solve(){
    int n;
    cin>>n;
    // x -> a1^a2.....^an-1^(a1^a2.....^an-1^.....) -> x && 0^x -> x => x=x
    int x;
    for(int i=0;i<n;i++) cin>>x;
    cout<<x<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--) solve();
}