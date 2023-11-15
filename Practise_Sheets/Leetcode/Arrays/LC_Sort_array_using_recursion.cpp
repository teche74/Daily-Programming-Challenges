class Solution {
public:
    void insert(vector<int>& nums, int temp) {
        if (nums.empty() || nums.back() <= temp) {
            nums.push_back(temp);
            return;
        }

        int val = nums.back();
        nums.pop_back();
        insert(nums, temp);
        nums.push_back(val);
    }

    void helper(vector<int>& nums) {
        if (nums.size() <= 1) {
            return;
        }
        
        int temp = nums.back();
        nums.pop_back();
        helper(nums);
        insert(nums, temp);
    }

    vector<int> sortArray(vector<int>& nums) {
        helper(nums);
        return nums;
    }
};
