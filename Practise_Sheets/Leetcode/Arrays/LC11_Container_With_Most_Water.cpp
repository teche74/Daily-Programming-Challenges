#include<bits/stdc++.h>

using namespace std;

class Solution {
public:

    int maxArea(vector<int>& height) {
        //using Bruteforce

        int size = height.size();
        int max =-1;

        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                int mn = min(height[i], height[j]);

                if(max  < (mn * (j-i))){
                    max = mn*(j-1);
                }
            }
        }

        return max;


        // using optimal o(n)

        int low=0, high = height.size()-1;
        int max =-1;

        while(low<high){
            int mn = min(height[low], height[high]);

            if(max  < mn * (high-low) ){
                max = mn*(high - low);
            }

            if(height[high] > height[low]){
                low++;
            }
            else{
                high--;
            }
        }

        return max;
    }
};


int main(){

    vector<int>nums1 = {1,8,6,2,5,4,8,3,7};
    Solution s = Solution();

    double res = s.maxArea(nums1);


        cout<<"Max Area : "<<res<<" ";
}