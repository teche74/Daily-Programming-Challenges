class Solution {
public:
    void Find(vector<int>& nums, set<vector<int>> &res,vector<int> & temp, int freq[ ]){
        if(nums.size() == temp.size()){
            res.insert(temp);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                temp.push_back(nums[i]);
                freq[i]=1;
                Find(nums, res, temp, freq);
                freq[i]=0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>res;
        vector<int>temp;
        int freq[nums.size()];

        for(int i=0;i<nums.size();i++) freq[i] =0;

        Find(nums,res,temp,freq);
        vector<vector<int>>ans(res.begin(), res.end());
        return ans;
    }
};
