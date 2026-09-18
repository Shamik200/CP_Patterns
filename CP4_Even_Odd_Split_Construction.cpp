// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 4 - Even Odd Split Construction
void solve(){
    int n;
    cin>>n;
    // even odd
    // 2 -> 2 2 wrong -> odd
    // 4 -> 2 4 | 1 5 -> even
    // 6 -> 2 4 6 | 1 5 7 -> odd -> wrong
    // 8 -> 2 4 6 8 | 1 3 7 9
    // 12 -> 2 4 6 8 10 12 | 1 3 5 9 11 13
    // odd*even=even | odd*odd=odd
    if((n/2)%2) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=2;i<=n;i+=2) cout<<i<<" ";
        for(int i=1;i<n/2;i+=2) cout<<i<<" ";
        for(int i=n/2+3;i<=n+1;i+=2) cout<<i<<" ";
        cout<<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--) solve();
}