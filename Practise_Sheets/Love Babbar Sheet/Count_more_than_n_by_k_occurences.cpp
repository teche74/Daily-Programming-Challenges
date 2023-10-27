class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        unordered_map<int,int> hash;
        
        for (int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        
        int count=0;
        for(auto it : hash){
            if ( it.second > n/k){
                count++;
            }
        }
        return count;
    }
};