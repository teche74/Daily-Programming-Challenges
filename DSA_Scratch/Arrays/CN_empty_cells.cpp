vector<long> emptyCells(int n, int k, vector<vector<int>> &tasks)
{
    vector<long>res;
    int task_count =0;
    vector<vector<int>> vec( n , vector<int> (n, -1)); 
    int total =n*n;
  
        for (vector<int> temp :  tasks) {
            int row = temp[0];
            int col = temp[1];

            for(int i=0;i<n;i++){
                if(vec[row][i] != 0){
                    vec[row][i] =0;
                    total--;
                }
                if(vec[i][col] != 0){
                    vec[i][col] =0;
                    total--;
                }
            }
            res.push_back(  total );
        }
    return res;

}
