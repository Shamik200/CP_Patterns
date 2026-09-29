// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 42 - Generating Permutations
void solve(){
    int n,k;
    cin>>n>>k;
    // 1 2 3 -> 1 3 2 -> 2 1 3 -> 2 3 1 -> 3 1 2 -> 3 2 1
    // 1 1 -> 2 1 -> 1 2 -> 1 2 -> 2 1 -> 1 1
    // 1 .... n -> 1 <= k <= n-1
    // k = n-1 -> 1 n 2 n-1 3 n-2 4 n-3 5 n-4 ... n-1
    // 5 2 -> 1 3 2 | 4 5
    int i=1, j=k+1;
    while(i<=j){
        cout<<i<<" ";
        i++;
        if(i<j){
            cout<<j<<" ";
            j--;
        }
    }
    for(int x=k+2;x<=n;x++) cout<<x<<" ";
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