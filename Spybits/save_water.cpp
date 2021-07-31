#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long
#define ll long long

int main(){
    ll t; cin>>t;
    while(t--){
        ll H,x,y,C;
        cin>>H>>x>>y>>C;
        ll ans = H*int(x+(y/2));
        if(ans>C){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}