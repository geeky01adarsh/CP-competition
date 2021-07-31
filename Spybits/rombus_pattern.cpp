#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    int temp = n;
    int ck = 0;
    while (temp--)
    {
        for (int i = n; i > ck; i--)
        {
            cout << i  << " ";
        }
        // ck++;
        for (int i = 1; i < (2*(n - temp - 1)); i++)
        {
            cout << "  ";
        }
        if(ck==0){
            for(int i = 2; i<=n; i++) cout<<i<<" ";
        }
        else
        for(int i = 1+ck; i<=n; i++){
            cout<<i<<" ";
        }
        ck++;
        cout << endl;
    }
    temp = n-1;
    while(temp--){
        for(int i=n; i>temp; i--) cout<<i<<" ";
        for(int i =1; i<(temp*2); i++) cout<<"  ";
        if(temp==0){
            for(int i=2; i<=n; i++) cout<<i<<" ";
        }
        else
        for(int i=temp+1; i<=n; i++) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}