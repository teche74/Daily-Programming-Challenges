#include<bits/stdc++.h>

using namespace std;


int Remove_Duplicate_Inplace(vector<int> & nums){
    int len = nums.size();
    int j=0;
    for(int i=1;i<len ;i++){
        if(nums[i-1] != nums[i]){
            nums[j] = nums[i-1];
			j++;
        }
    }

    nums[j] = nums[len-1];


    return ++j;
}

int main(){
    vector<int>nums = {1,1,2,2,2,3,3};

    for(int x: nums){
        cout<<x <<" ";
    }

    int non_dupl_values = Remove_Duplicate_Inplace(nums);

    cout<<"After Removing Duplicate :"<<endl;

    for(int x: nums){
        cout<<x <<" ";
    }
    cout<<endl;

    cout<<"Non Duplicate Values count : "<<non_dupl_values;
}