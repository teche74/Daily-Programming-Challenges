#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t , a,b;

    cin>>t;

    while(t--){
        cin>>a>>b;

        if(max(a,b) > 2* min(a,b)){
            cout<<"NO"<<endl;
        }
        else if( (a+b) %3 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}