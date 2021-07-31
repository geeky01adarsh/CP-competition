#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long
#define ll long long

int main(){
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll q;
    cin >> q;
    ll ans = 0;
    int ar[n+1];
    while(q--){
        ll x,k;
        cin>>x>>k;
        ar[x]+=k;
    }
    for(int i=0; i<n; i++){
        ll temp = arr[i];
        if(arr[i]>ar[i+1])
        arr[i] -= ar[i+1];
        else
        arr[i]=0;
        ar[i+1]-=temp;

    }
    for(int i =0; i<n; i++){
        ll ans =0;
        // while()
    }
    return 0;
}