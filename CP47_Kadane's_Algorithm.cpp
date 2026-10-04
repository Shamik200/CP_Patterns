// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 47 - Kadane's Algorithm
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int curr=0, j=-1, sum=0, l=0;
    for(int i=0;i<n;i++){
        if(a[i]){
            if(curr) curr--;
        } else{
            if(curr==0) j=i;
            curr++;
            if(curr>sum){
                sum=curr;
                l=i-j+1;
            }
        }
    }
    if(j==-1){
        for(int i=0;i<n;i++) sum+=a[i];
        cout<<sum-1<<endl;
        return;
    }
    // cout<<sum<<" "<<j<<" "<<l<<"\n";
    for(int i=0;i<j;i++) sum+=a[i];
    for(int i=j+l;i<n;i++) sum+=a[i];
    cout<<sum<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}