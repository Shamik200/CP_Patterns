// R_E_D_D_E_V_I_L
#include<bits/stdc++.h>
#define int long long int
using namespace std;

// CP PATTERN 8 - Simulation
void solve(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    // BBBBGGGBGGBB
    // vector<int> mv(n, 0), final_time(n, 0);
    // int l=0, prev=-1, g=0;
    // for(int i=0;i<n;i++){
    //     if(s[i]=='B') l++, g=0;
    //     if(s[i]=='G'){
    //         cout<<prev<<" "<<l<<endl;
    //         if(t<=l){
    //             swap(s[i], s[i-t]);
    //             prev=i;
    //             mv[prev]=t;
    //             final_time[prev]=t;
    //             cout<<"Y1 ";
    //         } else{
    //             if(prev==-1){
    //                 swap(s[i], s[0]);
    //                 prev=i;
    //                 mv[prev]=i;
    //                 final_time[prev]=(l==0?1:l);
    //                 cout<<"N1 ";
    //             } else{
    //                 cout<<g<<" "<<mv[prev]<<" N2 ";
    //                 int move = l+mv[prev]-1;
    //                 if(move==-1) move=0;
    //                 if(final_time[prev]<t) move++;
    //                 swap(s[i-move], s[i]);
    //                 int f=final_time[prev], p=prev;
    //                 prev=i;
    //                 mv[prev]=move;
    //                 // case left: here when calculating final time going checking
    //                 // the time for last one, we need to check when it leaves it's position
    //                 // first so we can add extra time when current moving g was 
    //                 // not able to move.
    //                 final_time[prev]=g+mv[prev];
    //                 if(f>=final_time[prev] && i-mv[prev]<=p) final_time[prev]++;
    //             }
    //         }
    //         l=0;
    //         g++;
    //         cout<<mv[prev]<<" "<<final_time[prev]<<endl;
    //     }
    // }
    // cout<<s<<endl;
    while(t--){
        for(int i=n-1;i>0;i--){
            if(s[i]=='G' && s[i-1]=='B'){
                swap(s[i], s[i-1]);
                i--;
            }
        }
    }
    cout<<s<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin>>T;
    while(T--) solve();
}