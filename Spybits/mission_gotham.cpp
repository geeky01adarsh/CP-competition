#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long
#define ll long long

int main()
{
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

    while (q--)
    {
        // cout<<q<<endl;
        ll x, k;
        cin >> x >> k;
        // cout<<x<<" "<<k<<endl;
        // cout<<arr[x-1]<<endl;
        if (arr[x - 1] <= k)
        {
            k -= arr[x - 1];
            arr[x - 1] = 0;
            // ll temp = k - arr[x - 1];
            x++;
            // cout<<k<<endl;

            if (x == n)
                continue;
            int cnt = 1;
            while (k > 0)
            {
                ll temp;
                if (k >= arr[x - 1])
                {
                    temp = arr[x - 1];
                    arr[x - 1] = 0;
                }
                else
                {
                    temp = arr[x - 1];
                    arr[x - 1] -= k;
                }
                // ll temp = k - arr[x - 1];
                k -= temp;
                // cout<<k<<" ";
                ans += (temp) * cnt;
                if (x == n)
                    break;
                x++;
                cnt++;
            }
        }
        else
        {
            arr[x - 1] -= k;
        }
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}