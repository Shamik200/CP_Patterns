// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 43 - Greedy Reconstruction
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    // 000....0.......1111111
    int i=0, j=n-1;
    while(i<n && s[i]=='0') i++;
    while(j>=0 && s[j]=='1') j--;
    i--;
    j++;
    // 000001111111111
    string ans = s.substr(0, i+1)+(j-i>1?"0":"")+s.substr(j, n-j);
    cout<<ans<<"\n";
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--) solve();
}