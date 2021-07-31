#include <bits/stdc++.h>

using namespace std;

#define ll long long 

pair<int,string> maxRepeating(string str)
{
    pair<int, string> ans;
	int len = str.length();
	int count = 0;
	char res = str[0];
	for (int i=0; i<len; i++)
	{
		int cur_count = 1;
		for (int j=i+1; j<len; j++)
		{
			if (str[i] != str[j])
				break;
			cur_count++;
		}
		if (cur_count > count)
		{
			count = cur_count;
			res = str[i];
            ans = make_pair(count, str[i]);
		}
	}
	return ans;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        // int p=0,q=0,r=0,si=0,t=0;
        pair<int,string> ad;
        ad = maxRepeating(s);
        cout<<ad.first<<" "<<ad.second<<endl;
    }
    return 0;
}