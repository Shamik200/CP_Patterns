// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 11 - Grid Obstacle Geometry
void solve(){
    int xa,ya,xb,yb,xf,yf;
    cin>>xa>>ya>>xb>>yb>>xf>>yf;
    // -     +      -
    //      - -
    // if(xa==xb && xa==xf) cout<<abs(ya-yb)+2*((ya<yf && yf<yb) || (ya>yf && yf>yb))<<endl;
    // else if(ya==yb && ya==yf) cout<<abs(xa-xb)+2*((xa<xf && xf<xb) || (xa>xf && xf>xb))<<endl;
    // else cout<<abs(xa-xb)+abs(ya-yb)<<endl;
    cout<<abs(xa-xb)+abs(ya-yb)+2*(((xa==xb && xa==xf) && ((ya<yf && yf<yb) || (ya>yf && yf>yb))) || ((ya==yb && ya==yf) && ((xa<xf && xf<xb) || (xa>xf && xf>xb))))<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--) solve();
}