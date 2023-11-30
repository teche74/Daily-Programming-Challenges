class Solution {
public:
    void solve(vector<int> & ans, int row){
        long long val =1;
        ans.push_back(1);

        for(int col =1;col <row;col++){
            val=val*(row-col);
            val =val /col;
            ans.push_back(val); 
        }
    }
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        solve(ans, rowIndex+1);
        return ans;
    }
};
