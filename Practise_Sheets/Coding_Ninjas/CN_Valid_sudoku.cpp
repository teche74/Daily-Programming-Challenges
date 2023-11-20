bool isValidSudoku(vector<vector<char>>& board) {
        int rows = board.size();
        int cols = board[0].size();

        vector<vector<int>>rowcase(rows,vector<int>(cols,0));
        vector<vector<int>>colcase(rows,vector<int>(cols,0));
        vector<vector<int>>gridcase(rows,vector<int>(cols,0));

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(board[i][j] != '.'){
                    int num = board[i][j] -'0';

                    int k = ((i/3)*3 + (j/3));

                    if(rowcase[i][num-1]++ || colcase[j][num-1]++ || gridcase[k][num-1]++){
                        return false;
                    }
                }
            }
        } 
        return true;
    }
