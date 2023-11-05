#include<bits/stdc++.h>

using namespace std;


class Solution{

    public:

    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int>ans;

        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                if(nums[i]+ nums[j] == target){
                    return {nums[i], nums[j]};
                }
            }
        }
        return {-1,-1};
    

    // using hashmap

    unordered_map<int,int> mp;

    for(int x : nums){
        int comp = target - x;

        if(mp.find(comp)!= mp.end()){
            return {comp,x};
        }
        else{
            mp[x]++;
        }
    }
    return {-1,-1};
    }

};


int main(){

    vector<int>nums = {2,7,11,15};
    int target = 9;
    Solution s = Solution();

    vector<int>res = s.twoSum(nums,target);

    for(auto c : res){
        cout<<c<<" ";
    }
}