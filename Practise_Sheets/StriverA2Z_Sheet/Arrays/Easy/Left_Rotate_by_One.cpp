#include<bits/stdc++.h>

using namespace std;


void LeftRotation_by_one(vector<int> & nums){
    int len = nums.size();
    int temp = nums[0];

    for(int i=1;i<len;i++){
        nums[i-1] = nums[i];
    }

    nums[len-1] = temp;
}

int main(){
    vector<int>nums = {1,1,2,2,2,3,3};

    for(int x: nums){
        cout<<x <<" ";
    }

    LeftRotation_by_one(nums);


    for(int x: nums){
        cout<<x <<" ";
    }

    cout<<endl;
}