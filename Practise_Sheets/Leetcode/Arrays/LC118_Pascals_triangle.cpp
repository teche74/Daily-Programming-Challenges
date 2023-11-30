class Solution {
public:
    vector<int>Makerow(int row){
        long long val =1;
        vector<int>ans;
        ans.push_back(1);
        for(int col =1;col <row ;col++){
            val = val * (row -col);
            val =val/col;
            ans.push_back(val);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        
        for(int i =1;i<=numRows;i++){
            res.push_back(Makerow(i));
        }
        return res;
    }
};
