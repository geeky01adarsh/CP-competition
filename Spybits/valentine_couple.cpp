#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll a[n];
        ll ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i]; 
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(arr, arr+n);
        sort(a, a+n);
        ll cnt = n-1;
        for(int i =0; i<n; i++){
            if((arr[i]+a[cnt])>ans){
                ans = arr[i]+a[cnt];
            }cnt--;
        }
        cout<<ans<<endl;
    }
    return 0;
}