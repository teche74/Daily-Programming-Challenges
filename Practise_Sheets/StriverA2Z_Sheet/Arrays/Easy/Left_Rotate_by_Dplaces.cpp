#include<bits/stdc++.h>

using namespace std;

void reverse(vector<int>& nums, int low, int high){
    while(low<high){
        int temp = nums[low];
        nums[low] = nums[high];
        nums[high] = temp;
        low++;
        high--;
    }
}


void LeftRotation_by_one(vector<int> & nums, int k, string direction){
    int len = nums.size()-1;
    
    if(direction == "left"){
        reverse(nums, 0, k-1);
        reverse(nums,k,len);
        reverse(nums,0,len);
    }
    else{
        reverse(nums, len-k+1, len);
        reverse(nums,0,len-k);
        reverse(nums,0,len);
    }
}

int main(){
    vector<int>nums = {1,2,3,4,5,6,7};

    for(int x: nums){
        cout<<x <<" ";
    }

    cout<<endl;

    int k=2;

    LeftRotation_by_one(nums, k, "right");


    for(int x: nums){
        cout<<x <<" ";
    }

    cout<<endl;
}