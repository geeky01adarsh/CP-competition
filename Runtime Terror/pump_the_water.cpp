#include<bits/stdc++.h>
using namespace std;

int maxWater(int arr[], int n)
{
	
	int res = 0;
	
	for (int i = 1; i < n-1; i++) {
		
		int left = arr[i];
		for (int j=0; j<i; j++)
		left = max(left, arr[j]);
		
		int right = arr[i];
		for (int j=i+1; j<n; j++)
		right = max(right, arr[j]);
		
	res = res + (min(left, right) - arr[i]);
	}

	return res;
}

int main()
{
	std::vector<int> vec;
    std::string buffer;
    int data;
    std::getline(std::cin, buffer);
    std::istringstream iss(buffer);
    while (iss >> data)
        vec.push_back(data);
    
	int n = vec.size();
    int arr[n];
    // int count=0;
	for(int i =0; i<n; i++){
        arr[i]= vec[i];
    }
	// cout << maxWater(arr, n);
    int temp = maxWater(arr, n);
        int ans =temp/2;
    if(temp%2){
        cout<<ans+1<<" "<<ans+0.5;
    }
    else{
        cout<<ans<<" "<<ans;
    }
	
	return 0;
}
