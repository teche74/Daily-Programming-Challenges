#include<bits/stdc++.h>

using namespace std;


pair<int,int>Find_Sec_Largest_Smallest(vector<int>nums){
    // Brute Force (Sorting)
    if(nums.size() < 3){
        return{-1,-1};
    }
    

    // sort(nums.begin(),nums.end());
    // int len =nums.size();

    // int small_ind=1;

    // if(nums[small_ind] == nums[0]){
    //     while(nums[small_ind]!=nums[0]){small_ind++;}
    // }
    
    // int lar_ind = len-2;

    // if(nums[lar_ind] == nums[0]){
    //     while(nums[lar_ind]!=nums[0]){lar_ind--;}
    // }


    // return{nums[lar_ind],nums[small_ind]};



    // Second Appraoch Find Largest then find just smaller that them .

    int lar = INT_MIN,small = INT_MAX;
    int len =nums.size()-1;
    for(int i=0;i<=len;i++){
        if(nums[i] > lar){
            lar =nums[i];
        }
        if(nums[i] < small){
            small = nums[i];
        }
    }

    // cout<<lar<<" "<<small<<endl;

    int sec_small= INT_MAX, sec_lar =INT_MIN;

    for(int i=0;i<len;i++){
        if(nums[i] > sec_lar &&  nums[i] != lar){
            sec_lar = nums[i];
        }

        if(nums[i] < sec_small && nums[i]!= small){
            sec_small = nums[i];
        }
    }

    return {sec_lar,sec_small};


    
}

int main(){
    vector<int>nums = {3,4,5,2};

    pair<int,int> x=  Find_Sec_Largest_Smallest(nums);

    cout<<"Second Smallest : "<<x.first<<endl;
    cout<<"Second Largest : "<<x.second<<endl;
}