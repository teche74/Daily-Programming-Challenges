#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main(){
    ll n;

    cin>>n;

    ll res = 2;

    for(ll i=1;i<n;i++){
        res = res*2 % mod;
    }

    cout<< res;
}