// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 40 - Binary Search On The Answer
void solve(){
    int n,k;
    cin>>n>>k;
    // n=3, k=7 -> 1 2  4 5  7 8
    // int low=1, high=n*k;
    // while(low<high){
    //     int mid=(low+high)/2;
    //     int curr = mid-(mid/n);
    //     if(curr<k) low=mid+1;
    //     else high=mid;
    // }
    // cout<<low<<endl;
    // k=5, n=3 -> 3 -> n/k=1
    // k=6, n=3 -> 3,6 -> n/k=2
    // k=7 -> 9/3=3
    // cout<<k+(k/n)<<endl;
    // n-1 -> k+k/(n-1)
    // 4,12 -> 1 2 3  5 6 7  9 10 11  13 14 15
    cout<<k+((k-1)/(n-1))<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--) solve();
}