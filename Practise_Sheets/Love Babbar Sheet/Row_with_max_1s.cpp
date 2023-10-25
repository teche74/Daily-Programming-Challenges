class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int res =-1;
	    int max_o=0;
	    for(int i=0;i<n;i++){
	        int count=0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j] ==1){
	                count++;
	            }
	        }
	        if(count > max_o){
	            max_o=count;
	            res =i;
	        }
	    }
	    
	    return res;
	}

};