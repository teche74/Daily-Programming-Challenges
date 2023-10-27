class Solution {
public:

bool CanPlace(vector<int> & stalls,int dist, int cows){
    int count_cow =1, last = stalls[0];

    for(int i=1;i<stalls.size(); i++){
        if(stalls[i] - last >= dist){
            count_cow++;
            last =stalls[i];
        }
        if(count_cow >=cows) return true;
    }

    return false;
}

    int solve(int n, int k, vector<int> &stalls) {
    
        sort(stalls.begin(), stalls.end());

        

        int low = 0, high =stalls[n-1]- stalls[0];

        while(low<=high){
            int mid =low+ (high-low)/2;

            if(CanPlace(stalls,mid,k)){
                low= mid+1;
            }
            else{
                high = mid-1;
            }
        }
        
        return high;
    }
};