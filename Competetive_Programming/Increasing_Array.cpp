#include<bits/stdc++.h>
#define ll long long 


using namespace std;

int main(){
    ll n, val, count=0;

    cin>>n;

    vector<long long > vec;

    for(ll i=0;i<n;i++){
        cin>>val;
        vec.push_back(val);
    }


    for(int i=1;i<n;i++){
        if(vec[i] < vec[i-1]){
            count+=(vec[i-1] -vec[i]);
            vec[i]=vec[i-1];
        }
    }
    cout<< count;
}