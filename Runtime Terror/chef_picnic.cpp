#include <bits/stdc++.h>

using namespace std;

#define ll long long 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        ll ans =0;
        cin>>arr[0];
        for(int i=1; i<n; i++){
            cin>>arr[i];
            if(arr[i]<arr[i-1]){
                int temp = arr[i-1]-arr[i];
                arr[i] += temp;
                ans+= temp;
            }
        }
        cout<<ans<<endl;
    }   return 0;
}  