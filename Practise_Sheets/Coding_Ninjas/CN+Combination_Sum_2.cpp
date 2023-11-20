#include<bits/stdc++.h>
void Findsum(int index, vector<int> &nums, int target, vector<int>& temp, set<vector<int>> &t){
    if(target == 0){
		sort(temp.begin(),temp.end());
		t.insert(temp);
        // res.push_back(temp);
        return;
    }

    for(int i=index;i<nums.size();i++){
        if(i >index &&  nums[i] == nums[i-1]) continue;

        if(nums[i] > target) break;

        temp.push_back(nums[i]);
        Findsum(i+1,nums,target - nums[i],temp,t);
        temp.pop_back();
    }

}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
	// vector<vector<int>>res;
    vector<int>temp;
	set<vector<int>>t;
    sort(arr.begin(),arr.end());

    Findsum(0,arr,target,temp,t);
	vector<vector<int>>res(t.begin(), t.end());
    return res;
}
