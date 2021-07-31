#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
using namespace std;

int maxSubArraySum(int a[], int size)
{
   int max_so_far = a[0];
   int curr_max = a[0];
 
   for (int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    while(m--){
        int x,y;
        cin>>x>>y;
        arr[x-1]=y;
        cout<<maxSubArraySum(arr,n)<<endl;
    }
    return 0;
}