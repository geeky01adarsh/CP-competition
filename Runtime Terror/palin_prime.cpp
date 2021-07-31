#include <bits/stdc++.h>
using namespace std;



void SieveOfEratosthenes(int n)
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++)
	{
		if (prime[p] == true)
		{
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

}


int main()
{
	int n = 999999;
	SieveOfEratosthenes(n);
	return 0;
}
