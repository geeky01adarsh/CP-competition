#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
using namespace std;

int display(string s,int n)
{
    // int n = s.size();
    for (int i = n - 1; i >= 0; i--)
        cout << s[i];
    cout << endl;
    return 0;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a;
        char s[a];
        for(int i=0; i<a; i++)
        cin >> s[i];
        cin >> b;
        sort(s, s+a);
        string s="";
        vector<int> v;
        for(int i=0; i<a; i++){
            if
        }
    }
    return 0;
}