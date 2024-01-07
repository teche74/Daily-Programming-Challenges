#include<bits/stdc++.h>
#define ll long long


using namespace std;

int main(){
    ll n, val, sum=0;

    cin>>n;

    vector<int>nums;

    for(int i=0;i<n-1;i++){
        cin>>val;
        nums.push_back(val);
        sum+=val;
    }

    ll max_sum  = (n*(n+1))/2;

    cout<<max_sum - sum;


}