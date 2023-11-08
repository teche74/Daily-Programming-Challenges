class Solution {
public:
    void find(int index , int target, vector<int> & candidates, vector<vector<int>> & ans, vector<int>store){
        if(index  == candidates.size()){
            if(target == 0 ){
                ans.push_back(store);
            }
            return;
        }

        if(candidates[index] <= target){
            store.push_back(candidates[index]);
            find(index , target - candidates[index], candidates, ans, store);
            store.pop_back();
        }
        find(index+1 , target, candidates, ans, store);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>store;

        find(0,target, candidates, ans , store);
        return ans;
    }
};
