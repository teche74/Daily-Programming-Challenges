#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        int total = size1+size2;
        
        priority_queue<int,vector<int>, greater<int>>min_heap;
        
        for(int x : nums1){
            min_heap.push(x);
        }

        for(int x : nums2){
            min_heap.push(x);
        }

        for(int i=0;i<(total-1)/2;i++){
            min_heap.pop();
        }

        if(total%2==0){
            int a = min_heap.top();
            min_heap.pop();
            int b = min_heap.top();
            return (a+b)/2.0;
        }

        return min_heap.top();
    }
};


int main(){

    vector<int>nums1 = {2,7,11,15};
    vector<int>nums2 = {1,3,5,9};
    Solution s = Solution();

    double res = s.findMedianSortedArrays(nums1, nums2);


        cout<<"Median : "<<res<<" ";
}