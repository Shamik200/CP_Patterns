// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 20 - Divisor Enumeration
void solve(){
    int n;
    cin>>n;
    // 6 - 1 2 3 6
    // 18 -> 1 2 3 6 9 18
    // 2 ways -> 1 to n -> i => 2 -> n/2 -> 1 to sqrt(n) -> i => n/i
    // 2 * n/2 > sqrt(n) -> sqrt(n)
    int ans=0;
    // 2 3 4 5 6
    // for(int i=6;i<=n;i++){
    //     int j=2, x=i, cnt=0;
    //     // 2 36 -> 9
    //     // 1 to n -> n*sqrt(n)
    //     // n^2 -> n*sqrt(n)
    //     while(j<=i){
    //         bool flag=false;
    //         while(x%j==0){
    //             x/=j;
    //             flag=true;
    //         } // 4
    //         if(flag) cnt++;
    //         j++;
    //     }
    //     if(cnt==2) ans++;
    // }

    // Sieve of Eratosthenes -> n*log(log(n))
    // Custom Variation of Sieve of Eratosthenes -> n*log(log(n))
    vector<int> pms(n+1, 0);
    for(int i=2;i<=n;i++){
        if(pms[i]==0){
            // 2*i 
            for(int j=i;j<=n;j+=i) pms[j]++;
        }
        // cout<<i<<" "<<pms[i]<<endl;
        if(pms[i]==2) ans++;
    }
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