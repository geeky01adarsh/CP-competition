#include <bits/stdc++.h>

using namespace std;

#define ll long long 

int main(){
    ll n, m, k;
    cin>>n>>m>>k;
    int arr[n];
    ll ans =0;
    vector<pair<int, int>> v;
    for(int i =0; i<n; i++){
        cin>>arr[i];
        pair<int, int> temp;
        temp.first = m-arr[i];
        temp.second = arr[i];
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    if(n==k){
        for(auto i:v)
        ans += i.second;
        cout<<(m*n)-ans<<endl;
        return 0;
    }
    ll temp = m*n;
    int count =0;
    ll an=0;
    while(n!=k){
        an += v[count].first;
        n--; count++;
    // cout<<an;
    }
    an = m*(count) -an;
    // cout<<an<<" ";
    for(int i=count; i<v.size();i++)ans+=v[i].second; 
    cout<<(m*(n-count+1))-ans+an<<endl;
    return 0;
}