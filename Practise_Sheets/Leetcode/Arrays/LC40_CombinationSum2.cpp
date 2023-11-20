class Solution {
public:
    void Findsum(int index ,vector<int> &candidate,int target,vector<vector<int>> &res,vector<int> &temp){
        if(target ==0){
            res.push_back(temp);
            return;
        }

        for(int i =index; i <candidate.size();i++){
            if(i >index && candidate[i] == candidate[i-1]) continue;

            if(candidate[i] > target) break;

            temp.push_back(candidate[i]);
            Findsum(i+1,candidate, target - candidate[i], res, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>res;
        vector<int>temp;


        Findsum(0,candidates,target,res,temp);
        return res;
    }
    
};
