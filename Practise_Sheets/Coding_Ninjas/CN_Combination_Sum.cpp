void Findsum(int index, vector<int> &nums, int target, vector<vector<int>> &res, vector<int>& temp){
    if(index == nums.size()){
        if(target == 0){
            res.push_back(temp);
        }
        return;
    }

    if(nums[index] <= target){
        temp.push_back(nums[index]);
        Findsum(index,nums,target - nums[index],res, temp);
        temp.pop_back();
    }

    Findsum(index+1,nums,target,res,temp);

}

vector<vector<int>> combSum(vector<int> &ARR, int target)
{
    vector<vector<int>>res;
    vector<int>temp;
    sort(ARR.begin(),ARR.end());

    Findsum(0,ARR,target,res,temp);

    return res;
}
