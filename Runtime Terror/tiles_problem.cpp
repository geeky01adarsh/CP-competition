#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll w,h,a,b,m,c;
    cin>>w>>h>>a>>b>>m>>c;
    double tt = (w/a);
    int tti = tt;
    if(tt*a<w){
        tti++;
    }
    float tto = h/b;
    int ttoi = tto;
    if(ttoi*b<h){
        ttoi++;
    }

    ll tp = ((tti*ttoi)+9)/10;
    ll x = (tti*b)-h;
    ll y = (ttoi*a)-w; 
    ll tctp = ((((tti*ttoi)*(a*b))-(w*h))-min(x,y))*c;
    // cout<<tctp<<endl;
    ll ans = tp*m+tctp;
    cout<<ans<<endl;
    return 0;
}