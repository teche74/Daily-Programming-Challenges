class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // Brute force
        
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j] == k){
                    count++;
                }
            }
        }
        return count;
        
        // using hash map
        
        unordered_map<int, int> hash;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (hash.find(k - arr[i]) != hash.end()) {
                count += hash[k - arr[i]];
            }
            hash[arr[i]]++;
        }
        return count;
    }
};