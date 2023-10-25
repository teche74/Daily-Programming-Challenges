class Solution {
public:

    bool Pallindrome(int num){
        string temp = to_string(num);
        
        int low=0, high =temp.length()-1;
        
        while(low<high){
            if(temp[low]!=temp[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
    int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++){
    	    if(!Pallindrome(a[i])){
    	        return 0;
    	    }
    	}
    	return 1;
    }
};