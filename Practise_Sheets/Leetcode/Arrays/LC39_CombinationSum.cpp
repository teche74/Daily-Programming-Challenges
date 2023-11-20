class Solution {
public:
    void Findsum(int index ,vector<int> &candidate,int target,vector<vector<int>> &res,vector<int> &temp){
        if(index == candidate.size()){
            if(target ==0){
                res.push_back(temp);
            }
            return;
        }

        if(candidate[index] <= target){
            temp.push_back(candidate[index]);
            Findsum(index, candidate, target - candidate[index], res, temp);
            temp.pop_back();
        }

        Findsum(index+1, candidate, target, res, temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>temp;


        Findsum(0,candidates,target,res,temp);
        return res;
    }
};
