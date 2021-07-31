#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
using namespace std;


const int MAX = 130;

bool validQuadruple(int arr[], int n)
{

	if (n >= MAX)
		return true;

	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			for (int k = j + 1; k < n; k++)
				for (int l = k + 1; l < n; l++) {
					if ((arr[i] ^ arr[j] ^ arr[k] ^ arr[l]) == 0) {
						return true;
					}
				}
	return false;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        if (validQuadruple(arr, n))
		cout << "Yes"<<endl;
	else
		cout << "No"<<endl;
    }
    return 0;
}