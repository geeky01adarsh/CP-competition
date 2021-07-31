#include <bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    cin>>a>>b;
    if(a==b){
        cout<<a.size()<<endl;
        return 0;
    }
    int arr[26]={0};
    int brr[26]={0};
    for(int i=0; i<a.size(); i++){
        arr[int(a[i])-65]++;
        brr[int(b[i])-65]++;
    }
    bool flag =1;
    for(int i =0; i<26; i++){
        if(arr[i]-brr[i]!=0){
            flag=0;
        }
    }
    if(flag){
        cout<<a.size()-1<<endl;
        return 0;
    }
    int x, y=0;
    long long ans =0;
    string s = "";
    for(int i=0; i<26; i++){
        if(arr[i]-brr[i]!=0){
            if((arr[i]!=0)&&(brr[i]!=0)){
                ans+=min(arr[i],brr[i]);
                s+=char(i+65);
            }
        }
        else{
            if(arr[i]==brr[i]){
                ans+=arr[i];
                s+=char(i+65);
            }
        }
        // cout<<ans<<endl;
    }
    cout<<s<<endl;
    cout<<ans<<endl;
    return 0;
}