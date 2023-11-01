#include<bits/stdc++.h>

using namespace std;



void Move_zeroes_to_end(vector<int> & nums){
    int i=0;
    
    for(int j=1; j<n; j++){
        if(a[i] != 0)
        {
            i++;
        }
        else if(a[i] == 0 && a[j] != 0)
        {
            swap(a[i] , a[j]);
            i++;
        }
    }
    return a;
}

int main(){
    vector<int>nums = {0,0,0,1};

    for(int x: nums){
        cout<<x <<" ";
    }

    cout<<endl;

    int k=2;

    Move_zeroes_to_end(nums);


    for(int x: nums){
        cout<<x <<" ";
    }

    cout<<endl;
}
