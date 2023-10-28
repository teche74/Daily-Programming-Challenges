#include<bits/stdc++.h>

using namespace std;

bool Linear_search(vector<int>array, int target){
    int size = array.size();

    // method 1;
    for(int i=0;i<size;i++){
        if(array[i] == target){
            return true;
        }
    }
    return false;


    // method 2
    for(int x : array){
        if(x ==target){
            return true;
        }
    }
    return false;


    // method 3
    auto it  = find(array.begin(), array.end(), target);
    if(it!= array.end()){
        return true;
    }
    else{
        return false;
    }
}


bool Binary_search(vector<int>array,int size, int target){
    // array must be sorted for implementing binary search.
    int low =0, high = array.size()-1;


    while(low<high){
        int mid = low+(high-low)/2;

        if(array[mid] == target){
            return true;
        }
        else if(array[mid] > target ){
            high= mid-1;
        }
        else{
            low= mid+1;
        }
    }
    return false;



    // method 2 using stl prebuilt function.

    bool  found  = binary_search(array.begin(), array.end(), target);
    
    if(found) return true;
    return false;
}


bool hash_search(vector<int>arr, int size, int target){
    unordered_map<int,int> hash;

    for(int x : arr){
        hash[x]++;
    }

    auto it  = hash.find(target);

    if(it != hash.end()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    vector<int> arr =  {123,43,2,1,6,8,2,3};

    int target;

    cout<<"Enter Target Value for Search : ";
    cin>>target;

    Linear_search(arr,target);

}