#include<bits/stdc++.h>
#define ll long long 


using namespace std;

int main(){
    string str ;
    cin>>str;

    ll size = str.size();

    ll count =1, max_count=1;

    for(ll i=1;i<size;i++){
        if(str[i] == str[i-1]){
            count++;
            max_count = ::max(count, max_count);
        }
        else{
            count =1;
        }
    }

    cout<< max_count;
}