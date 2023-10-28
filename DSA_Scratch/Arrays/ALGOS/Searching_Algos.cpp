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

int main(){
    vector<int> arr =  {123,43,2,1,6,8,2,3};

    int target;

    cout<<"Enter Target Value for Search : ";
    cin>>target;

    Linear_search(arr,target);

}