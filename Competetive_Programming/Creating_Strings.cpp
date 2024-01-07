#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve( string str,int check[ ], set<string>&res, string temp){
    if(str.size() == temp.size()){
        res.insert(temp);
        return;
    }

    for(int i=0;i<str.size();i++){
        if(check[i] == 0){
            check[i] = 1;
            temp.push_back(str[i]);
            solve(str,check,res, temp);
            temp.pop_back();
            check[i] = 0 ;
        }
    }
}

int main(){
    string str;
    cin>>str;

    sort(str.begin(), str.end());

    int size = str.size();

    int check[size] ;

    for(int i=0;i<size;i++){
        check[i] = 0;
    }

    set<string>res;
    string temp = "";

    solve(str,check, res,temp);

    cout<<res.size()<<endl;

    for(auto t : res){
        cout<<t<<endl;
    }


}