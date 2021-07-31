#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for(ll i=0; i<n; i++){
            ll temp = arr[i];
            ll cnt = 0;
            for(ll j=i; j<n; j++){
                // cout<<arr[j]<<" ";
                if(arr[j]==temp && j!=n-1) cnt++;
                else{
                    if(j==n-1 && arr[j]==temp) cnt++;
                    if(j!=n-1)
                    i = j-1;
                    else i = j;
                    break;
                }
            }
            // cout<<endl;
            if(cnt==3){
                cout<<temp*3<<endl;
                break;
            }
        }
    }
    return 0;
}