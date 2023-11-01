#include<bits/stdc++.h>

using namespace std;


int FindLargest(vector<int>nums){
    int max = INT_MIN;

    for(int x : nums){
        if(x > max ){
            max =x;
        }
    }
    return max;
}

int main(){
    vector<int>nums = {2,5,1,3,0};

    int largest = FindLargest(nums);
    cout<<"Largest Element is : "<<largest;
}