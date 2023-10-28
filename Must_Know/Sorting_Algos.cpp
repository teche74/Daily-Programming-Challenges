#include<bits/stdc++.h>

using namespace std;

void Bubble_sort(vector<int> & nums){
    int size= nums.size();

    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j+1]);
            }
        }
    }
}

void Modified_BubbleSort(vector<int>& nums){
    int size=nums.size();

    for(int i=0;i<size-1;i++){
        int swapped= false;
        for(int j=0;j<size-1-i;j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j+1]);
                swapped =true;
            }
        }
        if(!swapped){
            break;
        }
    }

}

int main(){
    vector<int> arr =  {123,43,2,1,6,8,2,3};


    Bubble_sort(arr);

}