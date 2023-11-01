#include<bits/stdc++.h>

using namespace std;


bool  Check_sorted(vector<int> nums){
    int size= nums.size();

    for(int i=0;i<size-1;i++){
        if(nums[i] > nums[i+1]){
            return false;
        }
    }

    return true;

}

int main(){
    vector<int>nums = {3,4,5,2};

    bool check  = Check_sorted(nums);

    if(check){
        cout<<"Not Sorted"<<endl;
    }
    else{
        cout<<"Sorted"<<endl;
    }
}