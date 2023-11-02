int linearSearch(int len, int target, vector<int> &nums)
{
    int res= -1;

    for(int i=0; i <len;i++){
        if(nums[i] ==target){
            res = i;
            break;
        }
    }

    return res;
}
