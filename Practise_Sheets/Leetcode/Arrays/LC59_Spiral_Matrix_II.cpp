class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n,0));

        int fill=1;

        int top = 0 , left = 0, right =n-1, bottom =n-1;

        while(top<=bottom && left <=right){
            
            for(int i=left; i <=right; i++){
                res[top][i] = fill;
                fill++;
            }
            top++;

            for(int i=top;i <= bottom;i++){
                res[i][right] = fill;
                fill++;
            }
            right--;

            if(top <= bottom){
                for(int i=right; i>=left;i--){
                    res[bottom][i]= fill;
                    fill++;
                }
                bottom--;
            }

            if(left <=right){
                for(int i = bottom; i >=top; i--){
                    res[i][left] =fill;
                    fill++;
                }
                left++;
            }
        }
        return res;
    }
};
