#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define dbl double
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, m , k;
        cin>>n>>m>>k;
        // int ck =0; 
        ll ans =0;
        bool flag =1;
        dbl arr[n+1][m+1];
        for(ll i=0; i<=n; i++){
            for(ll j=0; j<=m; j++){
                if(i==0||j==0){
                    arr[i][j]=0;
                }
                else cin>>arr[i][j];
                if(arr[i][j]>=k) flag =0;
            }
        }
        
        if(flag){ cout<<0<<endl; continue;}
        for(ll i=0; i<=n; i++){
            dbl prev=0;
            for(ll j=0; j<=m; j++){
                arr[i][j]+=prev;
                prev = arr[i][j];
            }
        }
        for(ll i=0; i<=m; i++){
            dbl prev=0;
            for(ll j=0; j<=n; j++){
                arr[j][i]+=prev;
                prev = arr[j][i];
            }
        }
        for(ll i=0; i<=min(n,m); i++){
            for(ll j=i; j<=n; j++){
                for(int k=i; k<=m; k++){
                    ll temp = arr[j][k]+arr[j-i][k-i]+arr[j-i][k]+arr[j][k-i];
                    if(temp/(i*i)>=k) ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}