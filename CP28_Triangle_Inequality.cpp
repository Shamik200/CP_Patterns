// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool check_triangle(int a, int b, int c){
    return (a+b>c && a+c>b && b+c>a);
}

bool check_segment(int a, int b, int c){
    return (a+b==c || a+c==b || b+c==a);
}

// CP PATTERN 28 - Triangle Inequality
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    // ncr -> nc(n-r)
    // 4c3 -> 4c1 -> 4
    // abc, abd, acd, bcd
    if(check_triangle(a,b,c) || check_triangle(a,b,d) || check_triangle(a,c,d) || check_triangle(b,c,d)) cout<<"TRIANGLE"<<endl;
    // abc -> x..........y............z
    else if(check_segment(a,b,c) || check_segment(a,b,d) || check_segment(a,c,d) || check_segment(b,c,d)) cout<<"SEGMENT"<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}