#include <bits/stdc++.h> 
bool searchGrid(vector<vector<int>>& mat, int n, int m, int target)
{

    for(int i=0;i<n;i++){
        if(mat[i][m-1] >= target){
            if(mat[i][m-1] == target) return true;
            int low = 0, high =m-1;

            while(low<=high){
                int mid =low+(high -low)/2;

                if(mat[i][mid] == target){
                    return true;
                }

                else if(mat[i][mid] <target){
                    low =mid+1;
                }
                else{
                    high =mid-1;
                }
            }
        }
    }

    return false;
}
