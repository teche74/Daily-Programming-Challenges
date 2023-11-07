class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int size = nums.size();

        int sum, min = INT_MAX,ans ;
        sort(nums.begin(), nums.end());

        for(int i=0;i<size;i++){
            if( i >0  &&  nums[i] == nums[i-1]) continue;

            int j = i+1;
            int k= size-1;

            while(j<k){
                sum  = nums[i] +  nums[j] + nums[k];
                
                if(sum > target){
                    k--;
                }
                else if(sum < target){
                    j++;
                }
                else{
                    return sum;
                }

                if(abs(sum - target) < min){
                    ans = sum ;
                    min  = abs( sum - target);
                }

            }
        }
        return ans;
    }
};
