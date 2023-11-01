#include <bits/stdc++.h> 
bool matrixGame(vector<vector<int>> &mat)
{
  for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int temp=0;
            for(int k=0;k<len;k++){
                temp += (mat[i][k] * mat[k][j]);
            }
                if(mat[i][j] != temp ){
                    return false;
                }
        }
    }
    return true;
}
