#include <bits/stdc++.h>

using namespace std;

#define ll long long 

int main(){
    ll n, m,k;
    cin>>n>>m>>k;
    int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
    int temp = n-k;
    sort(arr, arr+n);
    int count = n-1;
    int ans =0;
    while(temp--){
        ans += arr[count];
        count--;
    }
    for(int i=0; i<=count; i++){
        ans += (m-arr[i]);
    }
    cout<<ans<<endl;
    return 0;
}