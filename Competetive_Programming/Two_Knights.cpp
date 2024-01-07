#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;

    cin>>n;

    cout<<0<<endl;
    for(ll i=2;i<=n;i++){
        cout<<( (i*i) * (i*i - 1)/2) - (4*(i-2)*(i-1))<<endl;
    }
    return 0;
}