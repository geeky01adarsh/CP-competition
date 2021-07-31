#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

ll findXorSum(ll arr[], ll n)
{
	
	ll sum = 0;
	ll mul = 1;

	for (ll i = 0; i < 30; i++) {

		ll c_odd = 0;
		bool odd = 0;

		for (ll j = 0; j < n; j++) {
			if ((arr[j] & (1 << i)) > 0)
				odd = (!odd);
			if (odd)
				c_odd++;
		}
		for (ll j = 0; j < n; j++) {
			sum += (mul * c_odd);

			if ((arr[j] & (1 << i)) > 0)
				c_odd = (n - j - c_odd);
		}
        mul *= 2;
	}

	return sum%mod;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << findXorSum(arr, n) << endl;
    }
    return 0;
}
"