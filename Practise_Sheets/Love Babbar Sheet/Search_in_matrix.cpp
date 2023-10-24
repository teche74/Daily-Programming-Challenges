class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    if( mat[N-1][M-1] < X) return 0;
	    
	    int row=0;
	    for(row=0;row<N;row++){
	        if(mat[row][M-1] >= X){
	            int low= 0, high=M-1;
	    
	            while(low<=high){
	                int mid = low+(high-low)/2;
	            
	                if(mat[row][mid] == X) return 1;
	        
	                else if(mat[row][mid] > X){
	                    high=mid-1;
	                }
	                else{
	                    low=mid+1;
	                }
	            }
	        }
	    }
	    
	    
	    
	    return 0;
	}
};