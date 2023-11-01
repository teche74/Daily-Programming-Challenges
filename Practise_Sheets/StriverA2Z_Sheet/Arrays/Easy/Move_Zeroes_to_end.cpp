#include<bits/stdc++.h>

using namespace std;



void Move_zeroes_to_end(vector<int> & nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        if(nums[i]<= 0){
            int j=i;
            while(nums[j]<=0 && j<n-1){
                swap(nums[j],nums[j+1]);
                j++;
            }
        }
    }
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